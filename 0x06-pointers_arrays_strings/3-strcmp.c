#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int count = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		count = count + (s1[i] - s2[i]);
		i++;
	}
	return (count);
}
