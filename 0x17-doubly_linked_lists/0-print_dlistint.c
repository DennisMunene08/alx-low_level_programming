#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print list
 * Return: The number of nodes
 * @h: list
 */
size_t print_dlistint(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
