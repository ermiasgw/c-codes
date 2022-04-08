#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * followed by a new line
 */

int main(void)
{
	char c='a';
	while (c <= 'z')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}	
