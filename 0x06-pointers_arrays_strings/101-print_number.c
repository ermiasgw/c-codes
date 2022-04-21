#include "main.h"

/**
 * print_number - prints an integer.
 * @n: integer
 * Return: none
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n > 0)
	{
		_putchar((n % 10) + '0');
		n = n / 10;
	}
}
