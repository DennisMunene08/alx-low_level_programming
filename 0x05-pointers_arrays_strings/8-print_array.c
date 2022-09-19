#include "main.h"
#include <stdio.h>

/**
 * print_array - this will be used to print n elements of an array of integers
 * @a: this is where the array will be passed
 * @n:the number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < a[n])
		{
			printf(",");
			printf(" ");
		}
	}
}
