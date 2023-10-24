#include "lists.h"




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
