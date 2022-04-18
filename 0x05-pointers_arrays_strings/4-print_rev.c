#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: none
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(*s) - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}

