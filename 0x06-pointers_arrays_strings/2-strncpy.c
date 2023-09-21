#include "main.h"



char *_strncpy(char *dest, char *src, int n)
{
  int i = 0;

  for (; src[i] != '\0' && i < n; i++)
    {
      dest[i] = src[i];
    }

  for(; i < n; i++)
    {
      dest[i] = '\0';

    }
  return (dest);

}
