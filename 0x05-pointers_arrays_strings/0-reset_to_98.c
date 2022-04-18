#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates the
 * value it points to to 98
 * @n: pointer to be changed
 * Return: None
 */

void reset_to_98(int *n)
{
	int *var = n;

	*var = 98;
}

