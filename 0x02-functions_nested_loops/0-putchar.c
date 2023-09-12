#include "main.h"
int main(void)
{
  char str[] = "_putchar";
  int i = 0;
  while (str[i]) {
      write(1, &str[i], 1);
        i++;
    }
  return(0);

}  
