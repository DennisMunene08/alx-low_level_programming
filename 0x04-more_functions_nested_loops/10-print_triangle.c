#include "main.h"

/**
 * print_triangle - print triangle
 * @size: this is the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (n > 0)
	{
		int i; 
		int j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j > n - 2 - i)
				{
					putchar(35);
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
