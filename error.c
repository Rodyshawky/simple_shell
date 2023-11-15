#include"eshell.h"
#include<string.h>
/**
 * print_error - Displays error message
 * @input: Input recieved from user
 * @count: Count of shell loop
 * @argv: Arguments before program starts(argv[0] == Shell Program Name)
 */

void print_error(char *input, int count, char **argv)
{
	char *parse;

	_puts(argv[0]);
	_puts(": ");
	parse = _itoa(count);
	_puts(parse);
	free(parse);
	_puts(": ");
	_puts(input);
	_puts(": not found\n");
}
/**
 * e_print - Displays error message
 * @input: input string
 * Return: nothing
 */
void e_print(char *input)
{
	_puts(input);
	_puts(": ");
	_puts("No such file or directory\n");
}
