#include "lists.h"


void free_listint2(listint_t **head)
{
  listint_t *current, *temp;

while (*head != NULL)
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
