#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{

  int *arr;
  int len = 0, tmp = 0;
  
  if (min > max)
    return (NULL);
  
  len = max - min + 1;
  
 
  arr = malloc(len * sizeof(int));
  
  if (arr == NULL)
    return (NULL);

 
  while (tmp < len)
    arr[tmp] = min++;


  
  return (arr);





}
