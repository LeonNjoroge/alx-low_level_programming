#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: The number to be checked.
 *
 * Return: 1 if @n is positive, 0 if @n is zero, -1 if @n is negative.
 *
 * Description: This function checks the
 *sign of the input number @n and prints
 * a positive sign (+) for positive
 *numbers, a zero (0) for zero, and a negative
 * sign (-) for negative numbers.
 * It also returns 1 for positive, 0 for zero, and
 * -1 for negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
