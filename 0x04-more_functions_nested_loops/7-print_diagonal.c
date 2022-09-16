#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - diagonal line
 * @n: number of time '//should be printed
 *
 * Return: ...
 */

void print_diagonal(int n)
{
	int i;
	int b;

	for (i = 1; i <= n; i++)
	{
		for (b = 1; b <= n; b++)
		{
			if (n <= 0)
			{
				putchar('\n');
			}
			putchar(' ');
			putchar('\\');
		}
	}
	putchar('\n');
}
