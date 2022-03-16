#include "main.h"
#include <unistd.h>

/**
 * main - writes the character c to stdout
 *
 * Return: 0
 * 0n error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
	return (0);
}
