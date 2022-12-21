#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to prnt
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _atoi - Converts a string to a number
 * @s: String to be converted
 *
 * Return: converted number
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

/**
 * _strlen - Returns the length of a string
 * @s: Charter to determine length
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}

/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
