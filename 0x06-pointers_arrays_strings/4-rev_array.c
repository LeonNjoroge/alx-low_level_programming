#include "main.h"

void reverse_array(int *a, int n)
{
  int  i = 0;
  int temp;
  n = n - 1;
  
  for (; i < n; i++)
    {
      temp = a[i];
      a[i] = a[n];
      a[n] = temp;
      n--;

    }

)
