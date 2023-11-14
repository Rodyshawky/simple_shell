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

