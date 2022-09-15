#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - to print most of them
 *
 * Return: ...
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <=9; a++)
	{
		if ((a / 2 == 1) && (a / 4 == 1))
		{
			putchar(a);
		}
	}
	putchar('\n');
}
