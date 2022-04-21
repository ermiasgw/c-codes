#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @a: string
 * Return: string
 */

char *cap_string(char *a)
{
	int i = 0;

	while (a[i] != '\0')
	{
		if (i == 0 && a[i] >= 97 && a[i] <= 122)
		{
			a[i] = a[i] - ' ';
			i++;
		}
		if (a[i] == ' ' || a[i] == '\t' || a[i] == '\n' || a[i] == ',' || a[i] == '.' || a[i] == ';' || a[i] == '!'
				|| a[i] == '?' || a[i] == '"' || a[i] == '(' || a[i] == ')' || a[i] == '{' || a[i] == '}')
		{
			i++;
			if (a[i] >= 97 && a[i] <= 122)
			{
				 a[i] = a[i] - ' ';
				 i++;
			}
		}
		else
		{
			i++;
		}
	}
	return (a);
}
