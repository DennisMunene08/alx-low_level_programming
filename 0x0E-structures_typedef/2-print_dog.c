#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - This function basically take the pointer as
 * the parameter stores the address of my_dog init and then
 * through that it prints the members that have been initialised in
 * the main() fuction
 *
 * @d: a pointer to the my_dog variable
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if ((d ->age = 0) ||(d ->owner = NULL))
	{
		printf("(nill)");
	}
	else if ((d ->name = NULL))
	{
		printf("Name: (nill)");
	}
	else if (d == NULL)
	{
		printf(" ");
	}
	else
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}
