#include "shell.h"
/**
* main - main function simple shell program
* @argc: count arg
* @argv: vector args
* Return: 0 if success
*/
int main(int argc, char **argv)
{
	int i = 0, status, count;
	size_t buf = 0;
	char **cmd, **commands, *input, *c;
	(void) argc;

	if (isatty(STDIN_FILENO) == 1)
	{
	while (1)
	{
	prompt();
	count = getline(&c, &buf, stdin);
	input = space(c);
	if (count == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
	}
	if (input[0] == '\0')
		continue;
	commands = separator(input);
		for (i = 0; commands[i] != NULL; i++)
		{
			cmd = parse_cmd(commands[i]);
			if (_strcmp(cmd[0], "exit") == 0)
			{
				_exit(0);
				free(commands);
			}
			if ((_strcmp(cmd[0], "env") == 0))
				env(environ);
		}
		status = exec_cmd(cmd, input);
		if (status == -1)
			e_print(argv[0]);
	}
	}
	return (0);
}
