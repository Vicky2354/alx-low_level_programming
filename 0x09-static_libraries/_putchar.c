#include <unistd.h>

/**
 * _putchar - function printchar.
 * @c: is a char
 * Return: is an integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
