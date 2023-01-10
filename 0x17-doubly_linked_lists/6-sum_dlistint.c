#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all doubly linked list
 * @head: head node
 * Return: int/ the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
