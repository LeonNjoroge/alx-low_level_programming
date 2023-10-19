#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a linked list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be stored in the new node.
 *
 * Return: A pointer to the head of the linked list.
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *temp, *newNode = malloc(sizeof(list_t));
size_t m = 0;

if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);

while (str[m])
m++;

newNode->len = m;
newNode->next = NULL;
temp = *head;

if (temp == NULL)
*head = newNode;
else
{
while (temp->next != NULL)
temp = temp->next;
temp->next = newNode;
}
return (*head);
}
