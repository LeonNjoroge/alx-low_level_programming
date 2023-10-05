#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
  void *val;
  size_t nmembb = nmemb;
  
  val = calloc(nmembb , size);

  if (val == NULL)
    exit(NULL);

  return (val);


  


}
