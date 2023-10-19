#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
  
  list_t *newNode = malloc(sizeof(list_t));
  size_t m = 0;
  
  if (newNode == NULL)
    return NULL;
  

  newNode->str = strdup(str);

  while(str[m])
    m++;
  newNode->len = m;
  newNode->next = *head;
  *head = newNode;
  
  return (newNode);

}
