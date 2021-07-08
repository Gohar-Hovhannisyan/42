#include "pipex.h"

char *get_cmd_path(t_data *data, char *cmd)
{
    int i = -1;
    char *command;
    char *path;
    int fd;

    if (ft_strchr(cmd, '/'))
		return (cmd);
    while(data->paths[++i])
    {
        command = ft_strjoin("/", cmd);
        path = ft_strjoin(data->paths[i], command);
        fd = open(path, O_RDONLY);
        if (fd > -1)
        {
            close(fd);
            free(command);
            return(path);
        }
        free(command);
        free(path);
    }
    exit_message(data, "Commmand not found\n", EXIT_FAILURE);
    return (NULL);
}

void exit_message(t_data *data, char *str, int status)
{
    write(2, str, ft_strlen(str));
    free_leaks(data);
    exit(status);
}

void init_data(t_data *data, char **av, char **env)
{
    int i;

    i = -1;
	data->inFile = ft_strdup(av[1]);
	data->outFile= ft_strdup(av[4]);
	data->cmd1 = ft_split(av[2], ' ');
	data->cmd2 = ft_split(av[3], ' ');
    while(env[++i])
    {
        if (!ft_strncmp(env[i], "PATH=", 5))
            data->paths = ft_split(ft_substr(env[i], 5, ft_strlen(env[i])), ':');
    }
}

void free_leaks(t_data *data)
{
    int i = -1;

    free(data->inFile);
    free(data->outFile);
    while(data->cmd1[++i])
        free(data->cmd1[i]);
    free(data->cmd1);
    i = -1;
    while(data->cmd2[++i])
        free(data->cmd2[i]);
    free(data->cmd2);
    i = -1;
    while(data->paths[++i])
        free(data->paths[i]);
    free(data->paths);
    free(data);
}