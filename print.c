#include "eshell.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
/**
* _puts - function that print string
* @str: input value
* Return nothing
*/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _strlen - function returns length of string
 * @c: string input
 * Return: intger
 */
int _strlen(const char *c)
{
int i = 0;
if (!c)
return (0);
while (*c++)
i++;
return (i);
}
