#include "main.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
  if (size == 0)
    return NULL;

 char *arr;

 arr = malloc(size * sizeof(char));
 arr[0] = c;

 return arr;

   


}
