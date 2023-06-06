#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - It prints all elements of a listint_t list
 * 
 * @h: A pointer to head of list.
 * Return: It returns the number of nodes.
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
 * add_nodeint_end - It adds a new node at the end of a listint_t list
 * 
 * @head: A pointer to pointer of first node of listint_t list
 * 
 * @n:  An integer to be included in new node
 * 
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n1)
{
    listint_t *new;
    listint_t *current;

    current = *head;

    new = malloc(sizeof(listint_t));
    if (new == NULL)
        return (NULL);

    new->n1 = n1;
    new->next1 = NULL;

    if (*head == NULL)
        *head = new;
    else
    {
        while (current->next1 != NULL)
            current = current->next1;
        current->next1 = new;
    }

    return (new);
}

/**
 * free_listint - It frees a listint_t list
 * @head: A pointer to list to be freed
 * 
 * Return: void
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    while (head != NULL)
    {
        current = head;
        head = head->next1;
        free(current);
    }
}
