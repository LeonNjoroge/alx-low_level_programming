#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Description: This function takes two integers and returns their sum.
 *
 * Return: The sum of the two integers.
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Description: This function takes
 * two integers and returns their difference.
 *
 * Return: The result of subtracting the second integer from the first.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Description: This function takes two
 * integers and returns their product.
 *
 * Return: The result of multiplying the first integer by the second.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Divides two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Description: This function takes two
 * integers, divides the first by the second,
 * and returns the result. It checks for
 * division by zero and handles errors.
 *
 * Return: The result of dividing the dividend by the divisor.
 * If the divisor is 0, the function prints
 * an error message and exits with code 100.
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * op_mod - Calculates the remainder of dividing two integers
 * @a: The dividend
 * @b: The divisor
 *
 * Description: This function takes two
 * integers, calculates the remainder of
 * dividing the first by the second, and
 * returns the result. It checks for division
 * by zero and handles errors.
 *
 * Return: The remainder of dividing the dividend by the divisor.
 * If the divisor is 0, the function
 * prints an error message and exits with code 100.
 */

int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
