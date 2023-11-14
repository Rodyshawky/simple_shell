#include"shell.h"
/**
 * separator - Separates command recieved from stdin by ;
 * @input: String gathered from stdin
 * Return: Parsed strings to be used as commands
 */

char **separator(char *input)
{
	char **args;
	char *cmd;
	int i;
	int buf = MAX_INPUT_LENGTH;

	if (input[0] == ' ' && input[_strlen(input)] == ' ')
		exit(0);
	if (input == NULL)
		return (NULL);
	args = malloc(sizeof(char *) * buf);
	if (!args)
	{
		free(args);
		perror("hsh");
		return (NULL);
	}
	cmd = strtok(input, ";&");
	for (i = 0; cmd; i++)
	{
		args[i] = cmd;
		cmd = strtok(NULL, ";&");
	}
	args[i] = NULL;

	return (args);
}
