#include "main.h"

/**
 * prime - Helper function to check if a number is prime recursively.
 *
 * @n: The number to check for primality.
 * @a: The current divisor to check.
 *
 * Description: This function is a helper function used by is_prime_number
 * to recursively check if a number 'n' is prime by testing its divisibility
 * by incrementing divisors 'a'.
 *
 * Return: 1 if 'n' is prime, 0 if not.
 */


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

/**
 * is_prime_number - Checks if a number is a prime number recursively.
 *
 * @n: The number to check for primality.
 *
 * Description: This function checks if the provided number 'n' is a prime
 * number using a helper function 'prime' for the calculation.
 *
 * Return: 1 if 'n' is prime, 0 if not.
 */
int is_prime_number(int n)
{
	if (n == 0 || n < 0 || n == 1)
		return (0);

	return (prime(n, 2));
}
