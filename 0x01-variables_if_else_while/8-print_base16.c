#include <stdio.h>

int main()
{
  int i = 0;
  for (; i <= 9; i++)
  {
    putchar('0' + i);
  }
  char letter;
  letter = 'a';

  while (letter <= 'f')
  {
    putchar(letter);
    letter++;
  }
  putchar('\n');
  return (0);
}
