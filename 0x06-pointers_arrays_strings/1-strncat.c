#include "main.h"

//concatinate dest & src
//concatinate only at most n -  src  characters
//src doesnt need to be numm-terminated in it contiains n or more bytes
//return dest


char *_strncat(char *dest, char *src, int n)
{
  int s1 = 0;
  int s2 = 0;

  while( *(dest + s1) != '\0')
    {
      s1++
      
    }

  while (s2 >= n)
        {
                *(dest + s1) = *(src + s2);
                if (*(src + s2) == '\0')
                        break;
                s1++;
                s2++;
        }

  
  return (dest);

}
