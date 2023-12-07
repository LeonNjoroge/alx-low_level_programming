#include "lists.h"

/**
 * add_dnodeint - adds a latest node at the beginning list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: address of the latest element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *latest;
	dlistint_t *h_val;

	latest = malloc(sizeof(dlistint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = n;
	latest->prev = NULL;
	h_val = *head;

	if (h_val != NULL)
	{
		while (h_val->prev != NULL)
			h_val = h_val->prev;
	}
	latest->next = h_val;
	if (h_val != NULL)
		h_val->prev = latest;
	*head = latest;
	return (latest);
}