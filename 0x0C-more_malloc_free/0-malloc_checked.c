#include "main.h"
#include <stdio.h>
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{

  void *val;
  val = malloc( b * sizeof(unsigned int));

  if (val == NULL)
    exit(98);
  return (val);
  



}
