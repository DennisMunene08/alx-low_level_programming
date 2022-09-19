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
	char *reversed;

	length = strlen(s);
	for (i = 0; i < length; i++)
	{
		reversed[length - i - 1] = s[i];
	}
	printf("%s\n", reversed);
}
