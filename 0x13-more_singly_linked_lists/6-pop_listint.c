#include "lists.h"

int pop_listint(listint_t **head)
{
  int data;
  listint_t *hd, *current;
  

if (head == NULL)
  return (0);

 current = *head;
 data = current->n;

 *hd = current->next;

 free(current);
 *head = hd;
 return (data);
}
