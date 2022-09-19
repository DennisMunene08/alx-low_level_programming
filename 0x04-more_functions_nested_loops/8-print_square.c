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

void print_square(int size)
{
	int i;
	int j;
	
	for(i = 1; i <= size; i++)
	{
		for (i = 1; i <= size; i++)
		{
			putchar('#');
		}
		putchar('#');
	}

	putchar('\n');	
}
