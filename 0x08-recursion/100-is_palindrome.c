#include "main.h"
#include <string.h>

int check_palindrome(char *s,int left, int right)
{
  if(left < right)
    return (1);
  
  if (s[left] != s[right])
        {
	  return (0);
        }
  return (check_palindrome(s, left+1, right - 1));


}



int is_palindrome(char *s)
{
  int length = strlen(s);
  
  if (length == 0)
    return (1);

  return check_palindrome(s, 0, length - 1);
}
