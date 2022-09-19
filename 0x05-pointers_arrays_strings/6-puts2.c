#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - used to find every other character
 * @str: the string to be passed here
 *
 * Return : void
 */

void puts2(char *str)
{
	for (int i = 0; i < strlen(str); i+=2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
