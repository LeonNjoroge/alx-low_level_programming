#include "lists.h"

/**
 * free_listsptr - Free a linked list of generic pointers.
 * @head: A pointer to a pointer to the head of the linked list.
 *
*
 * Return: None.
 */

void free_listsptr(listdif_t **head)
{
listdif_t *current, *temp;

if (head != NULL)
{
current = *head;

while ((temp = current) != NULL)
{
current = current->next;
free(temp);
}
*head = NULL;
}
}


/**
 * free_listint_safe - Safely free a linked list and its elements.
 * @h: A pointer to a pointer to the head of the linked list.
 *
*
 * Return:
 * The number of nodes (elements) freed from the linked list.
 */

size_t free_listint_safe(listint_t **h)
{
size_t num = 0;
listint_t *current;

listdif_t *plus, *hd = NULL, *add;

while (*h != NULL)
{
plus = malloc(sizeof(listdif_t));

if (plus == NULL)
exit(98);

plus->n = (void *)*h;
plus->next = hd;
hd = plus;

add = hd;

for (; add->next != NULL; add = add->next)
{
if (*h == add->n)
{
*h = NULL;
free_listsptr(&hd);
return (num);
}
}

current  = *h;
*h = (*h)->next;
free(current);
num++;
}

*h = NULL;
free_listsptr(&hd);
return (num);
}
