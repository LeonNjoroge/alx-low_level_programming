#include "lists.h"

/**
 * add_nodeint_end - Add a new node at the end of a linked list.
 * @head: A pointer to the head of the linked list.
 * @n: The value to be stored in the new node.
 *
*
 * Return:
 * A pointer to the head of the linked list.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *temp, *newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;
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
