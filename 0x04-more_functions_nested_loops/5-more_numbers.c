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

	for (a = 1; a <=10; a++)
	{
		for (b = 0; b <= 14 ; b++)
		{
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');
		}
		putchar('\n');
	}
}
