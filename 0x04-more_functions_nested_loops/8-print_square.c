#include "main.h"
#include <stdio.h>

/**
 * print_square - will print square
 * @size: the size of the square
 *
 * Return: ...
 */
int main()
{
	print_square(10);
	return 0;
}

void print_square(int n)
{
	if (n > 1)
	{
		int i;
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
