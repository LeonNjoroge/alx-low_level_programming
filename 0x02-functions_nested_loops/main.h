#include <unistd.h>

void _putchar(char c);  


void print_alphabet(void)
{
  char letter = 'a';
  while(letter <= 'z')
  {
    _putchar(letter);
    letter++;
  }
  
}
