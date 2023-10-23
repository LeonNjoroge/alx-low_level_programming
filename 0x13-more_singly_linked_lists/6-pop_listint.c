#include "lists.h"

int pop_listint(listint_t **head)
{
  int data = 0;


if (head == NULL)
  return (0);

 data = (*head)->n;

 *head = (*head)->next;
 return (data);
}
