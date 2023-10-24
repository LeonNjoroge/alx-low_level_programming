#include "lists.h"

/**
 * print_listint_safe - Safely print the elements of a linked list.
 * @head: A pointer to the head of the linked list.
 *
*
 * Return:
 * The number of nodes in the list.
 */


size_t print_listint_safe(const listint_t *head)
{
size_t number;
const listint_t *current;

current = head;

while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
current = current->next;
number++;
}

if (ferror(stdout))
{
exit(98);
}
return (number);
}
