#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: string1
 * @s2: string2
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	int r;

	if (*s1 == '\0' && *s2 == '\0')
	{
		r = 1;
		return (r);
	}
	else if (*s1 == *s2)
	{
		s1++;
		s2++;
		r = wildcmp(s1, s2);
	}
	else if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
		{
			r = 1;
			return (r);
		}
		else if (*s1 == *(s2 + 1))
		{
			s1++;
			s2 = s2 + 2;
			r = wildcmp(s1, s2);
		}
		else if (*s1 != *(s2 + 1))
		{
			s1++;
			r = wildcmp(s1, s2);
		}
	}
	else if (*s1 != *s2)
	{
		r = 0;
		return (r);
	}



