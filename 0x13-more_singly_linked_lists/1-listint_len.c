#include "lists.h"

/**
 * listint_len - Get the number of elements in a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Description:
 * This function counts the number of elements in a linked list.
 *
 * Return:
 * The number of nodes in the list.
 */

size_t listint_len(const listint_t *h)
{
size_t  val = 0;

while (h != NULL)
{
h = h->next;
val++;
}
return (val);

}
