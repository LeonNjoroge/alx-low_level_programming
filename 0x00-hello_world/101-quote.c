#include <stdio.h>
int main(void)
{
  const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
    for (int i =0; message[i]!= '\0'; i++)
    {
     fputc(message[i],stderr);
    }

  return (1);
}
