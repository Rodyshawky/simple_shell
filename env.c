#include"shell.h"
/**
*env - function to print all environment of input from user
*@envp: input command
*Return: nothing
*/
void env(char **envp)
{
	char **env;
	char *all_env;

	for (env = envp; *env != 0; env++)
	{
	all_env = *env;
	_puts(all_env);
	_puts("\n");
	}
}

