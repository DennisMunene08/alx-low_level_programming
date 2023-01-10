#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node int the dll
 * @head: head node
 * @index: the nth node required
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (counter == index)
		{
			return (current);
		}
		counter++;
		current = current->next;
	}
	return (0);
}
