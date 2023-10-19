#include "list.h"



size_t print_list(const list_t *h)
{
  list_s* current = h;
  unsigned int  count = 0;
  
  while (current != NULL)
    {
      if (current->str == NULL)
	printf("(nil)");
      else
	{
      printf("%s", current->str);
      current = current->next;
   
	}
      count++;
    }
  
  return(count);





}
