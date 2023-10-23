#include "lists.h"


void free_listint2(listint_t **head)
{
listint_t *curr;

while ((curr = *head) != NULL)
{
head = NULL;
free(curr);





 }
}
