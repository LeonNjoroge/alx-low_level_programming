#include "lists.h"

/**
 * free_listint2 - Free a linked list and set the head to NULL.
 * @head: A pointer to a pointer to the head of the linked list.
 *
*
 * Return: None.
 */

void free_listint2(listint_t **head)
{
listint_t *current, *temp;

if (head != NULL)
{
current = *head;

while ((temp = current) != NULL)
{
current = current->next;
free(temp);
}
*head = NULL;
}
}
