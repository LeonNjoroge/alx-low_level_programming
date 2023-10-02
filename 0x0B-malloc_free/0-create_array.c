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

 if (arr == 0)
   {
      return (NULL); 
   }
 

 unsigned int j;
 j = 0;
 
 while(j < size)
   {
     arr[j] = c;
     j++;
   }
 
 return (arr);

   


}
