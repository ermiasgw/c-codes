#include "main.h"

/**
 * rot13 - rotate
 * @a: string
 * Return: string
 */

char *rot13(char *a)
{
	int i = 0;
	int j = 0;
	char *p = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *o = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (a[i] != '\0')
	{
		while (p[j] != '\0')
		{
			if (a[i] == p[j])
			{
				a[i] = o[j];
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (a);
}
