#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - this function takes a string and prints it in reverse
 * @s: will be used to store the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length;
	char temp;
	int length2;

	length2 = strlen(s) /2;
	length = strlen(s) - 1;
	for (i = 0; i < length2; i++)
	{
		temp = s[i];
		s[i] = s[length];
		s[length--] = temp;
	}
}
