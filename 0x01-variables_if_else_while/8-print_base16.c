#include <stdio.h>

int main()
{
  int i = 0;
  char letter;
  for (; i <= 9; i++)
  {
    putchar('0' + i);
  }
 
  letter = 'a';

  while (letter <= 'f')
  {
    putchar(letter);
    letter++;
  }
  putchar('\n');
  return (0);
}
