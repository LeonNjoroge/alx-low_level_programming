#include <stdio.h>

int main()
{
  char lower_case = 'a';
  char upper_case = 'A';

  while (lower_case <= 'z')
  {
    putchar(lower_case);
    lower_case++;
  }
  while (upper_case <= 'Z')
  {
    putchar(upper_case);
    upper_case++;
  }
  putchar('\n');
  return (0);
}
