#include <unistd.h>

int main()
{
  char *name = __FILE__;
  size_t size = sizeof(__FILE__);
  write(1, name, size);
  write(1, "\n", 1);
  return (0);

}
