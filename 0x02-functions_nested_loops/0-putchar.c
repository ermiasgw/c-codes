#include "main.h"

/**
 * main - program that prints _putchar.
 *
 * Return: int
 */

int main(void)
{
	int i = 0;
	char text[]  = "_putchar";

	while (i < 9)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
