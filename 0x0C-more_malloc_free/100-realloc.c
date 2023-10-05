#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
  char *ptr1, *ptr2;
  unsigned int a;

  if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (ptr == NULL)
		return (NULL);

	ptr2 = ptr;

	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ptr1[a] = ptr2[a];
	}

	if (new_size > old_size)
	{
	  a = 0;
	  while( a < old_size)
	    {
	       ptr1[a] = ptr2[a];
	       a++;
	    }
	}

	free(ptr);
	return (ptr1);
}
