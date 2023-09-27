#include "main.h"

int pow_op(int n, int a)
{
if (a % (n / a) == 0)
	{
		if (a * (n / a) == n)
			return (a);
		else
			return (-1);
	}
	return (0 + pow_op(n, a + 1));


}



int _sqrt_recursion(int n)
{
  if (n < 0)
    return (-1);
  if (n == 0)
    return (0);
  if (n == 1)
    return (1);

  return pow_op(n,2);

  
}
