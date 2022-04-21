#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: integer array
 * @n: integer
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int mid;

	n--;
	while (i != n)
	{
		mid = a[i];
		a[i] = a[n];
		a[n] = mid;
		i++;
		n--;
	}
}
