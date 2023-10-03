#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char **strtow(char *str)
{
  int a, b, c, d, e, num, size;
  char **args;

  if (str == NULL || str[0] == '\0')
    return (NULL);

  a = 0;
  num = 0;

  for (; str[a] != '\0'; a++)
  {
    if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
      num++;
  }

  if (num == 0)
    return (NULL);

  args = (char **)malloc((num + 1) * sizeof(char *));

  if (args == NULL)
  {
    free(args);
    return (NULL);
  }

  a = 0;
  c = 0;

  for (; str[a] != '\0' && c < num; a++)
  {
    if (str[a] != ' ')
    {
      size = 0;

      for (b = a; str[b] != ' ' && str[b] != '\0'; b++)
      {
        size++;
      }

      args[c] = (char *)malloc((size + 1) * sizeof(char));

      if (args[c] == NULL)
      {
        for (e = 0; e < c; e++)
          free(args[e]);

        free(args);
        return (NULL);
      }

      for (d = 0; d < size; d++, a++)
      {
        args[c][d] = str[a];
      }

      args[c][d] = '\0';
      c++;
    }
  }
  args[c] = NULL;
  return (args);
}
