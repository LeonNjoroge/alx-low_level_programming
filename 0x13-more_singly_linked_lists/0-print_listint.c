#include "lists.h"
/**
 * print_listint - Print the elements of a linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Description:
 * This function prints the elements of a linked list of integers.
 *
 * Return:
 * The number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
size_t val = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
val++;
}
return (val);

}
