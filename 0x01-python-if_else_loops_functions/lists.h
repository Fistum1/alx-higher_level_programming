#ifndef LISTS_H
#define LISTS_H

/**
 * struct listint_s - singly linked list
 * 
 * @n: integers
 * 
 * @next: It points to the next node.
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n1;
    struct listint_s *next1;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

listint_t *insert_node(listint_t **head, int number);

#endif /* LISTS_H */
