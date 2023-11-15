#include"eshell.h"

/**
 * exec_cmd - Excutes commands found in predefined path
 * @cmd: Array of parsed command strings
 * @input: Input recieved from user (to be freed)
 * Return: 1 Case Command Null -1 Wrong Command 0 Command Excuted
 */

int exec_cmd(char **cmd, char *input)
{
	int status;
	pid_t pid;

	if (*cmd == NULL)
		return (EXIT_FAILURE);
	pid = fork();
	if (pid == -1)
	{
		perror("Error");
		return (-1);
	}
	if (pid == 0)
	{
		if (_strncmp(*cmd, "./", 2) != 0 && _strncmp(*cmd, "/", 1) != 0)
			get_path(cmd);
		if (access(cmd[0], R_OK) != 0)
		{
			free(cmd);
			free(input);
			cmd = NULL;
			input = NULL;
			exit(127);
		}
		if (execve(*cmd, cmd, environ) == -1)
			return (2);
		else
			return (0);
	}
	wait(&status);
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return (0);
		else if (WEXITSTATUS(status) == 2)
			return (2);
		else if (WEXITSTATUS(status) == 127)
			return (127);
	}
	return (127);
}
