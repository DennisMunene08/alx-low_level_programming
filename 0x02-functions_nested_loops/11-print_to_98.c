#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this will be used to print any number to 98
 * @n: this value will be passed
 *
 * Return: ...
 */

void print_to_98(int n)
{
	if (n < 0)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(",");
				printf(" ");
			}
			n++;
		}
		printf("\n");
	}
	else if (n >= 0 && n <=98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(",");
				printf(" ");
			}
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
		printf("\n");
	}
}
