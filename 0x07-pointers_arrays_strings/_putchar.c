#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * On error, -1 is returned, and errno is set appropriately.
 * Return: On success 1.
 */

char _putchar(char c)
{
	return (write(1, &c, 1))
}
