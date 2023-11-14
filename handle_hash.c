#include"shell.h"
/**
 * hashtag_handle - function that removes everything after '#'
 * @str: input buffer
 * Return: nothing
 */

void hashtag_handle(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '#' && str[i - 1] == ' ' && str[i + 1] == ' ')
		{
			str[i] = '\0';
		}
	}
}
/**
 * enter - Handles newline character input
 * @string: String to be handled
 * Return: Empty string
 */
char *enter(char *string)
{
	free(string);
	return ("\0");
}

