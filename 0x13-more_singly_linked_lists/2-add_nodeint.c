#include "lists.h"

/**
 * add_nodeint - Add a new node at the beginning of a linked list.
 * @head: A pointer to the head of the linked list.
 * @n: The value to be stored in the new node.
 *
*
 * Return:
 * A pointer to the newly created node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = *head;
*head = newNode;

return (newNode);


}
