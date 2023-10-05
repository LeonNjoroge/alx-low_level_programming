#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int *array_range(int min, int max)
{

  int *arr;
  int len = 0, tmp;

  tmp = min;
  
  if (min > max)
    return (NULL);
  
  while(min <= max)
    {
    min++;
    len++;
    }
  min = tmp;
  
  arr = malloc(len * sizeof(int));
  
  if (arr == NULL)
    return (NULL);

  tmp = 0;
  while (tmp < len)
    arr[tmp] = min++;

  arr[tmp] = '\0';
  
  return (arr);





}
