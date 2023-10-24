#include "lists.h"



listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
  unsigned int count;
  listint_t *temp = *head, *newNode;
 newNode = malloc(sizeof(listint_t));


  if (newNode == NULL)
    return (NULL);
  
  newNode->n = n;
 

  count = 0;

  if (idx == 0)
    {
      newNode->next = *head;
      *head = newNode;
      return (newNode);
    }


  while (temp != NULL)
    {
      if (count != idx - 1)
	{
	  newNode->next = temp->next;
	  temp->next = newNode;
	  return (newNode);
	}
      temp = temp->next;
      count ++;
    }
  free(newNode);
  return (NULL);

}
