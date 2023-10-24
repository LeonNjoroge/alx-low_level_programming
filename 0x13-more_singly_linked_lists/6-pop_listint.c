#include "lists.h"

/**
 * pop_listint - Remove and return the value at the head of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 *
*
 * Return:
 * The value of the removed node (or 0 if the list is empty).
 */

int pop_listint(listint_t **head)
{
int data;
listint_t *hd, *current;

if (*head == NULL)
return (0);

current = *head;
data = current->n;

hd = current->next;

free(current);
*head = hd;
return (data);
}
