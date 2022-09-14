#include<stdio.h>
#include "main.h"

/**
 * main -Entry point
 *
 * Declaration: 'The program's description'
 * Return: Always 0 (success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();

	return (0);
}

/**
 * print_alphabet - function
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}
