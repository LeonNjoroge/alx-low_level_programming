#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  char *val;
  int a = 0, b = 0, size1 = 0, size2 = 0;

  while (s1 && s1[size1])
    size1++;

  while (s2 &&  s2[size2])
    size2++;

  if (n < size2)
    val = malloc((size1 + n + 1)  * sizeof(char));
  else
    val = malloc((size1 + size2 + 1)  * sizeof(char));

  if (val == NULL)
    return (NULL);

  while (a < (size1 + n) && n < size2 )
    val[a++] = s2[b++];

  while (a < (size1 + size2) && n >= size2)
    val[a++] = s2[b++];

  val[a] = '\0';

  return (val);
    
  





}
