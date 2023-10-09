#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{
if (d)
{
  if(d->name != NULL)
    {
      printf("Name: %s\n", d->name);
    }
  else
    {
      printf("Name: (nill)\n");
    }
  printf("Age: %f\n", d->age);
  if (d->owner)
    {
      printf("Owner: %s\n", d->owner);
    }
  else
    {
      printf("Owner: (nill)\n");
    }
}



}
