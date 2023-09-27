#include "main.h"

/**
 * factorial - Computes the factorial of a number recursively.
 *
 * @n: The number for which to compute the factorial.
 *
 * Description: This function recursively computes the factorial of the
 * provided number 'n'.
 *
 * Return: The factorial of 'n', or -1 if 'n' is negative.
 */


int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);

	return (n * factorial(n - 1));
}
