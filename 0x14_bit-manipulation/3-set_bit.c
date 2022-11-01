#include "main.h"

/**
 * set_bit - set bit to 1 at index
 * @n: pointer to number
 * @index: the inndex
 *
 * Return: the given index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int copy;

	if (index > 64)
	{
		return (-1);
	}
	copy = *n;
	copy = get_bit(copy, index);

	if (copy == 0x01)
	{
		return (1)
	}
	*n = (*n) + power(2, index);
	return (1);
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
#include "main.h"

/**
 * get_bit - get value of bit at a certain index
 * @n: value
 * @index: the given index
 *
 * Return: index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int c;

	if (index > 64)
	{
		return (-1);
	}
	for (c = 0; c < index; c++)
	{
		n >>= 0x01;
	}
	return (n & 0x01);
}
