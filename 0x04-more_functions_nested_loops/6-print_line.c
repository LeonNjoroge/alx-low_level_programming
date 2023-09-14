#include "main.h"


void print_line(int n)
{


  if (n <= 0)
    {
      _putchar('\n');
    }
  else
    {
      for (;n > 0;n--)
	{
	  _putchar('_');
	}
    }
}
