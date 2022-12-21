#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <errno.h>
#include <stddef.h>
#include <sys/stat.h>
#include <signal.h>

/**
 * struct list_path - Linked list containing PATH directories
 * @dir: directory in path
 * @p: pointer to next node
 */

typedef struct list_path
{
	char *dir;
	struct list_path *p;
} list_path;

extern char **environ;


/**
 * struct mybuild - pointer to function with corresponding buildin command
 * @name: buildin command
 * @func: execute the buildin command
 */
typedef struct mybuild
{
	char *name;
	void (*func)(char **);
} mybuild;


/* Functions done in previous exercises */

int _putchar(char c);
void _puts(char *str);
int _strlen(char *s);
int _atoi(char *s);
char *_strdup(char *str);

char *concat_all(char *name, char *sep, char *value);
char **splitstring(char *str, const char *delim);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

/** Environment Functions **/

char *_getenv(const char *name);
void _env(char **arv);
void _setenv(char **arv);
void _unsetenv(char **arv);
void _exitt(char **arv);

/* Terminal Checkers */
void sig_handler(int sig_num);
void _EOF(int len, char *buff);
void _isatty(void);


list_path *add_node_end(list_path **head, char *str);
list_path *linkpath(char *path);
char *_which(char *filename, list_path *head);

void(*checkbuild(char **arv))(char **arv);

void execute(char **argv);
void freearv(char **arv);
void free_list(list_path *head);

#endif
