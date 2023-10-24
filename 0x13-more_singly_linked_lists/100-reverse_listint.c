#include "lists.h"

/**
 * reverse_listint - Reverse a linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Description:
 * This function reverses a linked list in place.
 *
 * Return:
 * A pointer to the new head of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;
return (prev);
}
