#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int size, char c)
{
  if (size == 0)
    {
    return (NULL);
    }
  
 char *arr;

 arr = malloc(size * sizeof(char));


 unsigned int j;
 j = 0;
 
 for(;j < size;j++)
   {
     arr[j] = c;

   }
 
 return (arr);

   


}
