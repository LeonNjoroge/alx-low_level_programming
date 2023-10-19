#include "lists.h"



list_t *add_node_end(list_t **head, const char *str)
{

  list_t *temp, *newNode = malloc(sizeof(list_t));
  size_t m = 0;

  if (newNode == NULL)
    return NULL;


  newNode->str = strdup(str);

  while(str[m])
    m++;
  
  newNode->len = m;
  newNode->next = NULL;
  temp = *head;

  if (temp == NULL)
    *head = newNode;
  else
    {
      while (temp->next != NULL)
	temp =	temp->next;
      temp->next = newNode;
    }

  return (*head);

}
