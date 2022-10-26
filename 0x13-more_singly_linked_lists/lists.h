#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * struct list_s - singly linked list
 * @srt: string (malloc 'ed  string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: This is a singly linked list node structure
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
list_t *get_last(list_t **head);
void free_list(list_t *head);
list_t *get_last_node(list_t *head);

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);

#endif