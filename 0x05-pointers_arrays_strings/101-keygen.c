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
	while (i < 12)
	{
		putchar((rand()%(90-65))+65);
		i++;
	}
	return (0);
}

