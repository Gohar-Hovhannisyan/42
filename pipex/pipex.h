#ifndef PIPEX_H
#define PIPEX_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h> 
#include <sys/wait.h> 
#include <stdio.h>
#include "libft/libft.h"

typedef struct s_data
{
	char		*inFile;
	char		*outFile;
	char		**cmd1;
	char		**cmd2;
	char		**paths;
	int			in_fd;
	int			out_fd;
	int			fd[2];
}               t_data;

void exit_message(t_data *data, char *str, int status);
void init_data(t_data *data, char **av, char **env);
void exec_cmd1(t_data *data, char **env);
void exec_cmd2(t_data *data, char **env);
void execute(t_data *data, char **av, char **env);
char *get_cmd_path(t_data *data, char *cmd);
void free_leaks(t_data *data);

#endif
