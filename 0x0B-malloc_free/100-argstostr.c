#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
  int a, b, c, len;
  char *concat;

  if (ac == 0 || av == NULL)
    return (NULL);

  a = 0;
  b = 0;

  while (a < ac)
    {
      while (av[a][b] != '\0')
	{
	  len++;
	  b++;
	}
      len++;
      a++;
    }
  len++;

  concat = malloc(len * sizeof(char));

  if (concat == NULL)
    {
      free(concat);
      return (NULL);
      
    }

  c = 0;
  a = 0;
  b = 0;

  while(a < ac)
    {
      while (av[a][b] != '\0')
	{
	  concat[c] = av[a][b];
	  b++;
	  c++;
	}
      
      concat[c] = '\n';
      c++;
      a++;
    }
  return (concat);
}
