#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: none
 */

void rev_string(char *s)
{
	int i = 0;
	char s2[] = *s;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s2[i] >= 0)
	{
		s[j] = s2[i];
		j++;
		i--;
	}
}	
