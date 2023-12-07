#include "lists.h"

/**
 * free_dlistint - frees list
 * @head: head of the list
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempor;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((tempor = head) != NULL)
	{
		head = head->next;
		free(tempor);
	}
}
