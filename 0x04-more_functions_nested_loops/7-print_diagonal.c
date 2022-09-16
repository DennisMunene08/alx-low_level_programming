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
		ch = ' ';
		for (b = 1; b <= i; b++)
		{
			_putchar(ch);
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
