#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
  unsigned int i, j, size;
  char *val;
  char *tmp = str;

  if (str == NULL)
    {
      return (NULL);

    }

  i = 0;
  while(*str++)
    {
      i++;
    }

  size = i;
  str = tmp;
  
  
  
  val = malloc(size * sizeof(char) + 1);

  if (val == NULL)
    {
      return (NULL);
    }

  j = 0;

  for(; j < size; j++)
    {
      val[j] = str[j];
          }

  val[j] = '\0';
  return (val);
}
