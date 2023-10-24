#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a specific index
 * @head: A pointer to a pointer to the head of the linked list.
 * @index: The index at which to delete the node (0-based).
 *
*
 * Return:
 * - If the deletion is successful, it returns 1.
 * - If the index is out of range or the list is empty, it returns -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count;
listint_t *temp = *head, *prev = NULL;

count = 0;

if (temp == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}

while (temp != NULL)
{
if (count == index)
{
if (prev != NULL)
prev->next = temp->next;
free(temp);
return (1);
}
prev = temp;
temp = temp->next;
count++;
}
return (-1);
}
