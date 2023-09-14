#include "main.h"

void print_diagonal(int n)
{
  char space = " ";
  char all_space; 
  
  for (; n > 0;n--)
    {
      all_space = space * n;
      _putchar(all_space);
      _putchar("\\");

    }
  _putchar("\n");

}
