#include "lists.h"
#include <stdio.h>

int is_palindrome(listint_t **head)
{
  listint_t *nhead, *tort, *hare, *ptort;
  listint_t *cut = NULL, *half, *it1, *it2;

  if (!head || !*head)
    return (1);

  nhead = *head;
  if (nhead->next1 != NULL)
    {
      for (hare = nhead, tort = nhead; hare != NULL && hare->next1 != NULL;
	   ptort = tort, tort = tort->next1)
	hare = hare->next1->next1;
      if (hare != NULL)
	{
	  cut = tort;
	  tort = tort->next1;
	}
      ptort->next1 = NULL;
      half = tort;
      it1 = reverse_listint(&half);
      for (it2 = *head; it2; it1 = it1->next1, it2 = it2->next1)
	{
	  if (it2->n1 != it1->n1)
	    return (0);
	}
      if (cut == NULL)
	ptort->next1 = half;
      else
	{
	  ptort->next1 = cut;
	  cut->next1 = half;
	}
    }

  return (1);
}

/**
 * reverse_listint - Reverses a linked list in pladce
 * @head: Pointer to a pointer pointing to the first item in the list
 *
 * Return: The new head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
  listint_t *next1 = NULL, *prev = NULL;

  if (!head || !*head)
    return (NULL);

  while ((*head)->next1)
    {
      next1 = (*head)->next1;

      (*head)->next1 = prev;

      prev = *head;

      *head = next1;
    }

  (*head)->next1 = prev;

  return (*head);
}
