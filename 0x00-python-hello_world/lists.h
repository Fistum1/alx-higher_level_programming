#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - Singly linked list
 * 
 * @n: Integers
 * @next: It points to the next node.
 *
 * Description: Singly linked list node structure
 * 
 */
typedef struct listint_s
{
	int n1;
	struct listint_s *next1;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n1);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
