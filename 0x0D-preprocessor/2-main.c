#include <unistd.h>

int main()
{
  char *name = __FILE__;
  
  write(1, name, sizeof(name) + 1);
  write(1, "\n", 1);
  return (0);

}
