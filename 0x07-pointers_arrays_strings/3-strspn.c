#include "main.h"
#include <stdio.h>

/**
 * _strspn - return the length of a prefix subscript
 * @s: the address for the string
 * @accept: the string
 *
 * Return: number of bytes
 */

char *_strspn(char *s, char *accept)
{
	unsigned int l;
	unsigned int i;

	l = 0;

	while (*(s + l) != 0)
	{
		int flag = 0;

		for (i = 0; *(pre + i) != 0; i++)
		{
			 l++;
			flag = 1;
		}
	}
	if (flag == 0)
	{
		break;
	}
	return (l);
}
