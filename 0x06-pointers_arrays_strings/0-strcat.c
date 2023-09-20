#include "main.h"

char *_strcat(char *dest, char *src)
{
  int i = 0;
  int j = 0;


  for (; dest[i] != '\0'; i++)
    {
      _putchar(dest[i]);
    }
  
  while(src[j])
    {
      _putchar(src[j]);
      j++;

    }


}
