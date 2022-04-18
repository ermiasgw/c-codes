#include <stdio.h>

/**
 * print_array - print n elements
 * @a: Integer
 * @n: Integer
 * Return: none
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if ( i == n - 1)
		{
			i++;
			break;
		}
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}
