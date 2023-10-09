#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

dog_t *new_dog(char *name, float age, char *owner)
{
  int a = 0, b = 0 , c;
  dog_t *dogo;

  while (name[a] != '\0')
    a++;
  while (owner[b] != '\0')
    b++;

  dogo = malloc(sizeof(dog_t));

  if (dogo == NULL)
    {
      free(dogo);
      return (NULL);
    }

  dogo->name = malloc(a * sizeof(dogo->name));
  if (dogo->name == NULL)
    {
      free(dogo->name);
      free(dogo);
      return (NULL);
    }
  c = 0;
  while (c <= a)
    {
      dogo->name[c] = name[c];
      c++;
    }
  if (dogo->owner == NULL)
    {
      free(dogo->owner);
      free(dogo->name);
      free(dogo);
      return (NULL);
    }
  c = 0;
  while (c <= b)
    {
      dogo->owner[c] = owner[c];
      c++;
    }
  return (dogo);


}
