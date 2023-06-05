#include "lists.h"

/**
 * check_cycle - It checks if a singly linked list has a cycle in it.
 * 
 * 
 * @list: A pointer to the list.
 * 
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *p2;
	listint_t *prev;

	p2 = list;
	prev = list;
	while (list && p2 && p2->next1)
	{
		list = list->next1;
		p2 = p2->next1->next1;

		if (list == p2)
		{
			list = prev;
			prev =  p2;
			while (1)
			{
				p2 = prev;
				while (p2->next1 != list && p2->next1 != prev)
				{
					p2 = p2->next1;
				}
				if (p2->next1 == list)
					break;

				list = list->next1;
			}
			return (1);
		}
	}

	return (0);
}
