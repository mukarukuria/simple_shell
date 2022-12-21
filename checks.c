#include "main.h"

/**
 * sig_handler - checks if Ctrl + C is pressed
 * @sig_num: int
 *
 * Return: void
 */

void sig_handler(int sig_num)
{
	if (sig_num == SIGINT)
	{
		_puts("($)");
	}
}

/**
* _EOF - handles the End of File
* @len: return value of getline function
* @buff: buffer
*
* Return: void
*/

void _EOF(int len, char *buff)
{
	(void)buff;
	if (len == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			_puts("\n");
			free(buff);
		}
		exit(0);
	}
}

/**
 * _isatty - verif if terminal
 *
 * Return: void
 */

void _isatty(void)
{
	if (isatty(STDIN_FILENO))
		_puts("($)");
}
