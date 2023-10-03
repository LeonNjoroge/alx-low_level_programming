#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
  int a, b, c = 0, len = 0;
  char *concat;

  if (ac == 0 || av == NULL)
    return (NULL);

  for (a = 0; a < ac; a++)
  {
    for (b = 0; av[a][b] != '\0'; b++)
    {
      len++;
    }
    len++;
  }
  len++;

  concat = (char *)malloc(len * sizeof(char));

  if (concat == NULL)
  {
    return (NULL);
  }

  for (a = 0; a < ac; a++)
  {
    for (b = 0; av[a][b] != '\0'; b++)
    {
      concat[c] = av[a][b];
      c++;
    }
    concat[c] = '\n';
    c++;
  }
  concat[c] = '\0';

  return (concat);
}
