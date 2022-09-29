#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - to find palindrome string
 * @s: the pointer to the string
 *
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int len;
	int i;
	int res;

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		if (s[i] == s[len - 1 - i])
		{
			res = 1;
		}
		else if (s[i] != s[len - 1 - i])
		{
			res = 0;
		}
	}
	return (res);

}
