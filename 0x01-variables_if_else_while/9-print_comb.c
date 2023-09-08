#include <stdio.h>

int main()
{
  int i = 0;
  for (; i <= 9; i++)
  {
    putchar('0' + i);
    if(i != 9)
    {
    putchar(',');
    putchar(' ');
    }
    else
    {
      break;
    }  
  }
  putchar('\n');
  return (0);
}
