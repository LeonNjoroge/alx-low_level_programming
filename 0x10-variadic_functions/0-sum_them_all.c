#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * sum_them_all - Calculate the sum of variadic arguments
 * @n: The number of arguments
 * @...: The variadic arguments
 *
 * Description: This function takes a number of integer arguments and
 * calculates their sum. If n is 0, it immediately returns 0.
 *
 * Return: The sum of the variadic arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
int sum = 0;
va_list args;
va_start(args, n);

for (unsigned int i = 0; i < n; i++)
{
int value = va_arg(args, int);
sum += value;
}
va_end(args);
return (sum);
}
