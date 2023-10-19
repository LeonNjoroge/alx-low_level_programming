#include "lists.h"



size_t print_list(const list_t *h)
{

  size_t  count = 0;
  
  while (h != NULL)
    {
      if (h->str == NULL)
	printf("[0](nil) ");
      else
	printf("%s ", h->str);
	
      
      h = h->next;
      count++;
    }
  
  return(count);


}
