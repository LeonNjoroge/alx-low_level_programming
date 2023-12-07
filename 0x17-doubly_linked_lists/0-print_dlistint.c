#include "lists.h"

/**
 * print_dlistint - prints all the elements of list
 * @h: head of the list
 * Return: the number of nodes present
 */
size_t print_dlistint(const dlistint_t *h)
{
	int val;

	val = 0;
	if (h == NULL)
		return (val);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		val++;

		h = h->next;
	}
	return (val);
}
