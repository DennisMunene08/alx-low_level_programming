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

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		putchar(s[i--]);
	}
	putchar('\n');
}
