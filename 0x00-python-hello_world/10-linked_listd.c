#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - It prints all elements of a listint_t list.
 * 
 * @h: A pointer to head of list.
 * 
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    const listint_t *current;
    unsigned int n1; /* number of nodes */

    current = h;
    n1 = 0;
    while (current != NULL)
    {
        printf("%i\n1", current->n1);
        current = current->next1;
        n1++;
    }

    return (n1);
}

/**
 * add_nodeint - It adds a new node at the beginning of a listint_t list.
 * 
 * @head: A pointer to a pointer of the start of the list.
 * 
 * @n: integers to be included in node.
 * 
 * Return: The address of the new element or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head1, const int n1)
{
    listint_t *new;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n1 = n1;
    new->next1 = *head1;
    *head1 = new;

    return (new);
}

/**
 * free_listint - Frees a listint_t list.
 * 
 * @head: A pointer to list to be freed.
 * Return: void
 */
void free_listint(listint_t *head1)
{
    listint_t *current;

    while (head1 != NULL)
    {
        current = head1;
        head1 = head1->next1;
        free(current);
    }
}
