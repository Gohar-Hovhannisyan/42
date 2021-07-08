#include "pipex.h"

void exec_cmd1(t_data *data, char **env)
{
    if ((data->in_fd = open(data->inFile, O_RDONLY)) == -1)
        exit_message(data, "Cannot open file\n", EXIT_FAILURE);
    close(data->fd[0]);
    dup2(data->in_fd, STDIN_FILENO);
    dup2(data->fd[1], STDOUT_FILENO);
    close(data->fd[1]);
    if (execve(get_cmd_path(data, data->cmd1[0]), data->cmd1, env) == -1)
        exit_message(data, "Could not execute command/n", EXIT_FAILURE);
}

void exec_cmd2(t_data *data, char **env)
{
    if (( data->out_fd = open(data->outFile,  O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IROTH), 0777) == -1)
        exit_message(data, "Cannot write to or create file\n", EXIT_FAILURE);
    close(data->fd[1]);
	dup2(data->out_fd, STDOUT_FILENO);
	dup2(data->fd[0], STDIN_FILENO);
	close(data->fd[0]);
    if (execve(get_cmd_path(data, data->cmd2[0]), data->cmd2, env) == -1)
        exit_message(data, "Could not execute command/n", EXIT_FAILURE);
}

void execute(t_data *data, char **av, char **env)
{
    int pid1;
    int pid2;

    if (access(av[1], R_OK) == -1)
        exit_message(data, "Cannot read from file\n", EXIT_FAILURE);
    if (pipe(data->fd) == -1)
        exit_message(data, "Error during pipe\n", EXIT_FAILURE);
    if ((pid1 = fork()) < 0)
        exit_message(data, "Error during fork\n", EXIT_FAILURE);
    if (pid1 == 0)
        exec_cmd1(data, env);
    else
    {
        wait(NULL);
        if ((pid2 = fork()) < 0)
            exit_message(data, "Error during fork\n", EXIT_FAILURE);
        if (pid2 == 0)
            exec_cmd2(data, env);
        else
        {
            close(data->in_fd);
            close(data->out_fd);
            close(data->fd[0]);
            close(data->fd[1]);
            wait(NULL);
        }
    }
}

int main(int ac, char **av, char **env)
{
    t_data *data;

    if (ac == 5)
    {
        if (!(data = malloc(sizeof(t_data))))
        {
            write(2, "Error during malloc\n", 20);
            return (1);
        }
        init_data(data, av, env);
        execute(data, av, env);
        free_leaks(data);
    }
    else
    {
        write(2, "Wrong number of arguments\n", 26);
        return (1);
    }
}
