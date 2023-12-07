#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of new node, or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *hd_point;
	dlistint_t *latest;
	unsigned int m;

	latest = NULL;
	if (idx == 0)
		latest = add_dnodeint(h, n);
	else
	{
		hd_point = *h;
		m = 1;
		if (hd_point != NULL)
			while (hd_point->prev != NULL)
				hd_point = hd_point->prev;
		while (hd_point != NULL)
		{
			if (m == idx)
			{
				if (hd_point->next == NULL)
					latest = add_dnodeint_end(h, n);
				else
				{
					latest = malloc(sizeof(dlistint_t));
					if (latest != NULL)
					{
						latest->n = n;

						latest->next = hd_point->next;
						latest->prev = hd_point;
						hd_point->next->prev = latest;
						hd_point->next = latest;
					}
				}
				break;
			}
			hd_point = hd_point->next;
			m++;
		}
	}
	return (latest);
}
