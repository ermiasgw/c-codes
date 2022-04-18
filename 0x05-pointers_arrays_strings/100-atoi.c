#include "main.h"

/**
 * _atoi - convert
 * @s: string
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int n = 1;

	while (s[i] < '0' && s[i] > '9')
	{
		if (s[i] == '\0')
		{
			n = 0;
			return (n);
		}
		if (s[i] == '-')
		{
			n = n * -1;
		}
		i++;
	}
	n *= s[i];
	i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (n < 0)
		{
			n = (s[i] - '0');
		}
		else
		{
			n = n * 10 + (s[i] - '0');
		}
		i++;
	}
	return (n);
}
