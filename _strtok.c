#include "eshell.h"
/**
 * _strtok - function that extracts tokens of a string
 * @str: string
 * @delim: delimiter
 * Return: pointer to the next token or NULL
 */
char *_strtok(char *str, char delim)
{
	char *s;
	char *end = NULL;
	char *result = NULL;

	if (str)
		s = str;

	if (!s)
		return (NULL);

	if (*s == '\0')
	{
		if (s == end)
		{
			s = NULL;
			return (NULL);
		}
		end = s;
		return (s);
	}

	result = s;
	while (*s)
	{
		if (*s == delim)
		{
			*s = '\0';
			end = s;
			s++;
			return (result);
		}
		s++;
	}
	end = s;

	return (result);
}
