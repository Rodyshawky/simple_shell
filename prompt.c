#include "eshell.h"
/**
*prompt - print prompt
*Return: nothing
*/
void prompt(void)
{
char *prompt = "MY_SHELL$ ";

write(1, prompt, 10);
}
/**
*cmd_line - function to get command input from user
*Return:line input by user
*/
char *cmd_line(void)
{
	size_t buf = 0;
	char *c, *input;
	int count;

	count = getline(&c, &buf, stdin);
	input = space(c);
	if (count == -1)
	{
		if (feof(stdin))
		{
			free(c);
			exit(EXIT_SUCCESS);
		}
	}
	return (input);
}
