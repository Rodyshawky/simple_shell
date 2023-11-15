#ifndef ESHELL_H
#define ESHELL_H

#include <errno.h>
#include <dirent.h>
#include <stddef.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
/*---Macros---*/



#define TOK_DELIM " \t\r\n\a\""
#define MAX_INPUT_LENGTH 1024
#define BUF_FLUSH -1
extern char **environ;
/** prototypes--*/
char *enter(char *string);
int full_path(char **command);
void print_error(char *input, int count, char **argv);
char *read_cmd(void);
void prompt(void);
char *_itoa(unsigned int n);
int intlen(int num);
void array_rev(char *arr, int len);
void exitfun(void);
void execute_args(char *token);
int get_path(char **token);
char *_strcat(char *dest, char *src);
char *_strdup(char *str);
void handle_exit(void);
char *_getenv(const char *name);
char **separator(char *input);
void handle_cd(char *str);
/* main_shell function */
/**get env to set path*/
void env(char **envp);
/**tokenize command input**/
char **line_token(char *line);

/** printprompt-readcommand--*/

/**stringto token**/
char *_strtok(char *str, char delim);
/**printing functions**/
void _puts(char *str);
void e_print(char *input);
int build_echo(char **cmd);
char *space(char *str);
int _putchar(char c);
int _strlen(const char *c);
/**string compare function**/
int _strcmp(char *haystack, char *needle);
/**compare string to character**/
char *_strchr(const char *str, int c);
size_t my_strcspn(const char *s, const char *reject);
/** execve function*/
char *_strtok(char *str, char delim);
/**printing functions**/
/**commands*/
char *search_path(char *file);
int execute_cd(char **args);
int execute_chdir(char **args);
int execute_mkdir(char **args);
int _create_file(char **args);
int execute_echo(char **args);
char *_getline(void);
void free_env(char **env);
int change_dir(char **cmd, __attribute__((unused))int st);
char *handle_enter(char *string);
char *space_handle(char *str);
void hashtag_handle(char *buf);
char *build(char *token, char *value);
int exec_cmd(char **cmd, char *input);
char *cmd_line(void);
char **parse_cmd(char *input);
char *_strcpy(char *dest, char *src);
int _strncmp(const char *s1, const char *s2, size_t n);
void exec_ls(char **args);
#endif
                   
