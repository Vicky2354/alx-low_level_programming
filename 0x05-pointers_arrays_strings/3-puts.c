#include "main.h"

/**
 * _puts - write a function that prints a string, followed
 * by a new line, to stdout.
 * @str: an input string
 * Return: Nothing
 */
void _puts(char *str)
{
	int j = 1;

	char pl = str[0];

	while (pl != '\0')
	{
		_putchar(pl);
		pl = str[j++];
	}
	_putchar('\n');
}
