#include <stdio.h>
#include <stdlib.h>

int main(int args, char *argv[])
{
  
  if (args == 3)
    {
      printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
    }
  else
    {
      printf("Error\n");
    }
  
  return(0);

}
