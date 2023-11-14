#include"shell.h"
/**
*get_path - function to get path of input from user
*@token: input command
*Return: 0 if success , 1 if fail
*/

int get_path(char **token)
{
	char *p;
	char *path;
	char *root;
	char cmd[1024];

	p = _getenv("PATH");
	path = _strdup(p);
	root = strtok(path, ":");
	while (root != NULL)
	{
		_strcpy(cmd, root);
		if (cmd[strlen(cmd) - 1] != '/')
		{
			_strcat(cmd, "/");
		}
		_strcat(cmd, *token);
		if (access(cmd, X_OK) == 0 && access(cmd, F_OK) == 0)
		{
			free(path);
			return (1);
		}
		root = strtok(NULL, ":");
	}
	free(path);
	return (0);
}
