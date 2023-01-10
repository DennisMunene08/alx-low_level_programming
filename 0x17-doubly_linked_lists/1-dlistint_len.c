#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - get the length of the doubly linked list
 * Return: the len
 * @h: list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int size = 0;

	while (h)
	{
		h = h->next;
		size++;
	}
	return (size);
}
