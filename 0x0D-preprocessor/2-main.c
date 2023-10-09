#include <unistd.h>
#include <string.h>

int main()
{
  const char *name = __FILE__;
  size_t size = strlen(name);
  write(1, name, size);
  write(1, "\n", 1);
  return (0);

}
