#include <stdio.h>
/**
 *main - entry point
 *Loops through the array of characters and prints them
 *Return:Always 1(Error)
 */
int main(void)
{
const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int i=0;
for (; message[i]!= '\0'; i++)
{
  fputc(message[i],stderr);
}
return (1);
}
