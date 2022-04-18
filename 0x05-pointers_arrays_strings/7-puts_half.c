#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: none
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	n = (i - 1) / 2;
	n++;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
