#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;
	concat = string_nconcat("Best ", "school !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}
