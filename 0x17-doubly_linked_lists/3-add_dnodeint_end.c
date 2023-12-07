#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: head of list
 * @n: value of element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *latest;
	dlistint_t *h_val;


	latest = malloc(sizeof(dlistint_t));
	if (latest == NULL)
		return (NULL);
	latest->n = n;
	latest->next = NULL;
	h_val = *head;

	if (h_val != NULL)
	{
		while (h_val->next != NULL)
			h_val = h_val->next;
		h_val->next = latest;
	}
	else
	{
		*head = latest;
	}
	latest->prev = h_val;
	return (latest);
}
