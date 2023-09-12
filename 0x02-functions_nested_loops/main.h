#include <unistd.h>
0;276;0c
void _putchar(char c)
{
  write(1, &c, 1);
}  


void print_alphabet(void)
{
  char letter = 'a';
  while(letter <= 'z')
  {
    _putchar(letter);
    letter++;
  }
  _putchar("\n");
}
