#include <stdio.h>

int main(int args, char *argvs[])
{
  int i;
  i = 0;
  for (; i < args; i++)
    {
      printf("%s\n", argvs[i]);
    }

  return(0);

}
