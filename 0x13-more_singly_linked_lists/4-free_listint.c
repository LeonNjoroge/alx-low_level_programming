#include "lists.h"


void free_listint(listint_t *head)
{

listint_t *val;

while ((val = head) != NULL)
{
head = head->next;
/*free(val->n);*/
free(val);

}
}
