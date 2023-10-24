#include "lists.h"




size_t print_listint_safe(const listint_t *head)
{
  size_t number;

  while (head != NULL)
{
  printf("[%x] %d\n", (void *)head, head->n);
head = head->next;
number++;
}

if (ferror(stdout))
    {
        exit(98);
    }

  
  return (number);

}
