#include "main.h"
#include <string.h>

void print_rev(char *s)
{
  int len = strlen(s);
  int i = len - 1;

  for(; i >= 0; i--)
    {
      _putchar(s[i]);
    }
  _putchar('\n');
}
  
