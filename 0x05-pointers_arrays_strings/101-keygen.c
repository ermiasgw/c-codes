#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - good
 * Return: Integer
 */

int main(void)
{
	int i = 0;

	srand(time(NULL));
	while (i < 16)
	{
		putchar((rand()%(90))+15);
		i++;
	}
	return (0);
}

