#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		if (src[j] == '\0')
		{
			break;
		}
		else
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
