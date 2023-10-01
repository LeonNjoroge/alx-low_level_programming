#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @num: The integer for which to compute the absolute value.
 *
 * Return: The absolute value of @num.
 *
 * Description: This function computes
 *the absolute value of the input integer @num.
 * If @num is negative, it returns the
 *negation of @num to make it positive. If @num
 * is already non-negative, it returns @num as is.
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
