#include "main.h"


int prime(int n, int a)
{
  if (n % a == 0)
	{
		if (n == a)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, a + 1));
}


int is_prime_number(int n)
{
  if (n  == 0)
    return (0);

  if (n < 0)
    return (0);

  if (n == 1)
    return (prime(n,2));
  

}
