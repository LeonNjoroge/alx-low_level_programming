#include "lists.h"


listint_t *find_listint_loop(listint_t *head)
{
  listint_t *temp = head, *previous = head;

  while (head && temp->next && temp)
    {
      head = head->next;
      temp = temp->next->next;

      if (head == temp)
	{
	  head = previous;
	  previous = temp;

	  while (1)
	    {
	      temp = previous;

	      while (temp->next != previous && temp->next != head)
		{
		  temp = temp->next;
		}
	      if (temp->next == head)
		break;

	      head = head->next;

	      }
	  return (temp->next);
	}



    }

  return (NULL);

}
