#include "lists.h"

/**
 * add_node_end - used to add the node at the end of a list
 * @head: a pointer to the head pointer
 * @str: The string to be in the node
 *
 * Return: A pointer to the first node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *nextp;
	list_t *headerp;

	new = malloc(sizeof(list_t));
	*head = new;
	headerp = *head;
	nextp = new;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = new;
	return (headerp);

}
