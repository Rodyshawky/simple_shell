#include "eshell.h"
/**
* main - main function simple shell program
* @argc: count arg
* @argv: vector args
* Return: 0 if success
*/
int main(int argc, char **argv)
{
	int i = 0, status;
	char **cmd, **commands, *input;
	(void) argc;
	if (isatty(STDIN_FILENO) == 1)
	{
	while (1)
	{
	prompt();
	input = cmd_line();
	if (input[0] == '\0')
		continue;
	commands = separator(input);
		for (i = 0; commands[i] != NULL; i++)
		{
			cmd = parse_cmd(commands[i]);
			if (_strcmp(cmd[0], "exit") == 0)
			{
				free(commands);
				_exit(0);
			}
			if ((_strcmp(cmd[0], "env") == 0))
			{
				env(environ);
			}
			if ((_strcmp(cmd[0], "ls") == 0))
				exec_ls(cmd);
		}
		status = exec_cmd(cmd, input);
		if (status < 0)
			e_print(argv[0]);
	}
	}
	return (0);
	}
