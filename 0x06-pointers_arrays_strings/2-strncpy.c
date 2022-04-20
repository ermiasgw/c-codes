#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: string
 * @src: string
 * @n: integer
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (j < n)
	{
		if (src[j] == '\0')
		{
			dest = src;
			break;
		}
		else
		{
			dest[j] = src[j];
			j++;
		}
	}
	return (dest);
}

