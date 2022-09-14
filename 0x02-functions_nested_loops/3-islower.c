#include "main.h"

/**
 * _islower - determine whether a character is lowercase
 *
 * Return: an integer value
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
