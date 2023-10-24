#include "lists.h"

/**
 * free_listint - Free a linked list.
 * @head: A pointer to the head of the linked list.
 *
*
 * Return: None.
 */

void free_listint(listint_t *head)
{

listint_t *val;

while ((val = head) != NULL)
{
head = head->next;

free(val);

}
}
