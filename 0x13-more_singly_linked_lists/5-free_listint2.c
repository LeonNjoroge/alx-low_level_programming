#include "lists.h"


void free_listint2(listint_t **head)
{
listint_t *curr;

while (*head != NULL)
{
curr = *head;
*head = curr->next;
free(curr);
}
}
