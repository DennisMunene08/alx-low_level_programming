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
	char ch;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			putchar('\n');
		}
		ch = ' ';
		for (b = 1; b <= i; b++)
		{
			putchar(ch);
		}
		putchar('\\');
		putchar('\n');
	}
	putchar('\n');
}
