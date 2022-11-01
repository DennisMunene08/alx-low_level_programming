#include "main.h"

/**
 * binary_to_unit - converts binary number to unsignned integr
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int size = strlen(b);
	unsigned int i = 0;
	unsigned int exp = size - 1;

	if (!b)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] == '1')
		{
			num = num + power(2, exp);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
		exp--;
		i++;
	}
	return (num);
}
/**
 * pow - return the power of two numbers
 * @a: the first int
 * @b: the second
 *
 * Return: unsigned int
 */
unsigned int power(unsigned a, unsigned b)
{
	unsigned int i;
	unsigned int num;
	if (b == 0)
	{
		return (1);
	}
	for (i = 1; i <= b; i++)
	{
		num = num * a;
	}
	return (num);
}
