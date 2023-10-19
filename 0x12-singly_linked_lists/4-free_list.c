#include "lists.h"

/**
 * free_list - Frees a linked list and its string contents.
 * @head: A pointer to the head of the linked list.
 */

void free_list(list_t *head)
{
list_t *curr;

while ((curr = head) != NULL)
{
head = head->next;
free(curr->str);
free(curr);
}
}
