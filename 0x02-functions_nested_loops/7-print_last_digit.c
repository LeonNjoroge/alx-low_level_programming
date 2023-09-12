#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: The number for which to print the last digit.
 *
 * Return: The last digit of the number.
 *
 * Description: This function calculates and prints the last digit of the input
 * number @n. It returns the last digit.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
