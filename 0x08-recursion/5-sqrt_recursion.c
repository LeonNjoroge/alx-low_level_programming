#include "main.h"

/**
 * pow_op - Helper function to find square root recursively.
 *
 * @n: The number to find the square root of.
 * @a: The current guess for the square root.
 *
 * Description: This function is a helper function used by _sqrt_recursion to
 * recursively find the square root of a number 'n' using a guess 'a'.
 *
 * Return: The square root of 'n' if found, -1 if not found.
 */


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

/**
 * _sqrt_recursion - Computes the natural square root of a number recursively.
 *
 * @n: The number for which to find the square root.
 *
 * Description: This function computes the natural square root of the provided
 * number 'n' using a helper function 'pow_op' for the calculation.
 *
 * Return: The natural square root of 'n', or -1 if 'n' is negative.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (pow_op(n, 2));
}
