#include "main.h"
#include <unistd.h>

int main(void)
{
  char str[] = "_putchar";
  int i = 0;
  for (; str[i] != '\0'; i++)
  {
    write(1, &str[i], 1);
    i++;
  }
  return(0);

}  
