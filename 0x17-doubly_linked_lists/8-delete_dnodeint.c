#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - get and delete nth node
 * @head: head node
 * @index: The nth node
 * Return: 1 if success, 0 otherwise
 */

int delete_dnodeint_at_index(dlist_t **head, unsigned int index)
{
	dlistint_t *current;

	if (!*head)
	{
		return (-1);
	}
	current = get_dnodeint_at_index(*head, index);
	if (!current)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = current->next;
		if (current->next)
		{
			current->next->prev = 0;
		}
		free(current);
		return (1);
	}
	current->prev->next = current->next;
	if (current->next)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}

/**
 * get_dnodeint_at_index - get the nth node
 * @head: the head node
 * @index: nth node
 * Return: pointer to the nth node
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
		current++;
		current = current->next;
	}
	return (0);
}
