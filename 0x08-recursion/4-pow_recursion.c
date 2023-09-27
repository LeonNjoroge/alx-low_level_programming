#include "main.h"

/**
 * _pow_recursion - Computes the value of 'x'
 *raised to the power of 'y' recursively.
 *
 * @x: The base value.
 * @y: The exponent value.
 *
 * Description: This function recursively computes
 *the value of 'x' raised to the
 * power of 'y'. It returns -1 if 'y' is negative, and 1 when 'y' is 0.
 *
 * Return: The result of 'x' raised to the power of 'y'.
 */


int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
