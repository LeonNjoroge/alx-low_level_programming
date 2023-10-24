#include "lists.h"

/**
 * get_nodeint_at_index - Get a node at a specified index in a linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to retrieve (0-based).
 *
* Return:
 * A pointer to the node at the specified index (or NULL if not found).
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;


while (head != NULL)
{
if (count == index)
return (head);

head = head->next;
count++;
}
return (NULL);

}
