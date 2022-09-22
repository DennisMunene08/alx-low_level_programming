#include "main.h"
#include <stdio.h>

/**
 * cap_string - will be used to capitalize every word on a string
 * @s: the string to be passed
 *
 * Return: The capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			else
			{
				s[i] = s[i];
			}
		}
		if (s[i - 1] == ' ')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			else
			{
				s[i] = s[i];
			}
		}
	}
	return (s);
	putchar('\n');
}
