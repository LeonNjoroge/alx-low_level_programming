#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head_a;
	unsigned int m;
    dlistint_t *head_b;

	head_a = *head;
	if (head_a != NULL)
		while (head_a->prev != NULL)
			head_a = head_a->prev;
	m = 0;
	while (head_a != NULL)
	{
		if (m == index)
		{
			if (m == 0)
			{
				*head = head_a->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head_b->next = head_a->next;

				if (head_a->next != NULL)
					head_a->next->prev = head_b;
			}
			free(head_a);
			return (1);
		}
		head_b = head_a;
		head_a = head_a->next;
		m++;
	}
	return (-1);
}