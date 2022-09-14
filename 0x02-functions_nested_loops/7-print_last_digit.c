#include "main.h"
#include<stdio.h>

/**
 * print_last_digit - printint the last digit in numerals
 * @a: where to put the digits
 *
 * Return: Always an integer
 */

int print_last_digit(int a)
{
	int b;

	if (a >= 0)
	{
		b = a % 10;
		putchar(b + '0');
		return (b);
		putchar('\n');
	}
	else if (a < 0)
	{
		b = -1 * (a % 10);
		putchar(b + '0');
		return (b);
	}
	putchar('\n');
	return (0);
}
