#include <stdio.h>

int main()
{
  int i = 0;
  for (; i <= 9; i++)
  {
    putchar('0' + i);
    putchar(',');
    putchar(' ');
  }
  putchar('\n');
  return (0);
}
