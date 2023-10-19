#include "lists.h"

/**
 * add_node - Add a new node at the beginning of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL if allocation fails.
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode = malloc(sizeof(list_t));
size_t m = 0;

if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);

while (str[m])
m++;
newNode->len = m;
newNode->next = *head;
*head = newNode;

return (newNode);

}
