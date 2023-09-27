#include "main.h"

int _strlen_recursion(char *s)
{
  int i;

  i = 0;

  if (*s == '\0')
    return (i);

  i++;
  _strlen_recursion(s + 1);


}
