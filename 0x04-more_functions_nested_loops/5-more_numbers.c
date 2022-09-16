#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print more
 *
 * Return: ...
 */

void more_numbers(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9 ; b++)
		{
			putchar(b + '0');
		}
		for (c = 10; c <= 14; c++)
		{
			printf("%d", c);
		}
		putchar('\n');
	}
	putchar('\n');
}
