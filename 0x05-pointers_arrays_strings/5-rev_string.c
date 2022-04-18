#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: none
 */

void rev_string(char *s)
{
	int i = 0;
	char s2;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (j < i)
	{
		s2 = s[j];
		s[j] = s[i];
		s[i] = s2;
		j++;
		i--;
	}
}
