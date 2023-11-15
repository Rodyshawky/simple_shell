#include"eshell.h"
/**
 * parse_cmd - Parses the command recieved from stdin
 * @input: String gathered from stdin
 * Return: Parsed strings to be used as arguments
 */

char **parse_cmd(char *input)
{
	char **args;
	char *line;
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
	line = strtok(input, "\n\t\r\a ");
	for (i = 0; line; i++)
	{
		args[i] = line;
		line = strtok(NULL, "\n\t\r\a ");
	}
	args[i] = NULL;
	return (args);
}
