#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
  char *val;
  unsigned int a;;

  if (nmemb == 0 || size == 0)
    return(NULL);
  
  val = calloc(nmembb * size);

  if (val == NULL)
    return(NULL);

  a = 0;
  while(a < (nmemb * size))
    {
      val[a] = 0;
      a++;
    }
  
  return (val);


  


}
