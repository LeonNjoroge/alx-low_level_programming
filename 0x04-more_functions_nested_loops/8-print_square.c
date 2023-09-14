#include "main.h"

void print_square(int size)
{
  int i, j;

  if (size == 0)
    {
      _putchar('#');

    }
  else
    {
      for (i = 1; i < size; i++)
	{
	  for (i = 1; i < size; i++)
	    {
	      _putchar('#');

	    }
	  _putchar('\n');

	}

    }
}
