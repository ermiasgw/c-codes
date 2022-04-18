#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: to be swaped
 * @b: to be swaped
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

