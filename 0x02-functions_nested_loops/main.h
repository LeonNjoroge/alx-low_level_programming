#include <unistd.h>

void _putchar(char c)
{
  write(1, &c, 1);
}  


void print_alphabet_x10(void)
{
  char letter = 'a';
  while(letter <= 'z')
  {
    _putchar(letter);
    letter++;
  }
  _putchar("\n");
}
