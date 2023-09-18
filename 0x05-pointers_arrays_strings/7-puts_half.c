#include "main.h"
#include <string.h>

void puts_half(char *str)
{
  int len = strlen(str);
  int start = (len - 1) / 2;
  int i = start;

  for (; i < len ; i++)
    {
      _putchar(str[i]);
    }
  


}
