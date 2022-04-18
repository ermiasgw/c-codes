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
			n *= -1;
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
			n = (s[i] - '0');
		}
		i++;
	}
	n = '4' - '0';
	return (n);
}
