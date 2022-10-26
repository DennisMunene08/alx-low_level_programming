#include "lists.h"

/**
 * print_listint - print the elements in the list
 * @h: pointer to the first node
 *
 * Return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;	
	}
       return (count);	
}
