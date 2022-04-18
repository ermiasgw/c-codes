#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: string
 * @src: string
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
