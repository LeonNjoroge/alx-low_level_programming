#include "lists.h"

/**
 * insert_nodeint_at_index - Insert a new node at a specific index
 * @head: A pointer to a pointer to the head of the linked list.
 * @idx: The index at which to insert the new node.
 * @n: The value to be stored in the new node.
 *
*
 * Return:
 * A pointer to the newly inserted node (or NULL if insertion fails).
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count;
listint_t *temp = *head, *newNode;

count = 0;

if (idx == 0)
{
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;
return (newNode);
}

for (; count < idx - 1; count++)
{
if (temp == NULL)
return (NULL);

temp = temp->next;
}

if (temp == NULL)
return (NULL);

newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = temp->next;
temp->next = newNode;
return (newNode);
}
