#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
  if (str == NULL)
    return NULL;
  
  list_t *newNode = malloc(sizeof(list_t));

  if (newNode == NULL)
    return NULL;
  

  newNode->str = strdup(str);

  if (newNode->str ==NULL)
    {
      free(newNode);
      return NULL;
    }
  newNode->next = *head;
  *head = newNode;
  return newNode;

}
