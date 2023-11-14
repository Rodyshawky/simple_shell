#include "shell.h"
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
*_exit - function to get exit
*Return:Nothing
*/

void _exit(void)
{
	sleep(1);
	exit(0);
}
