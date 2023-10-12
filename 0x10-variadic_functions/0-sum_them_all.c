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

int sum = 0;
va_list args;
unsigned int a = 0;

if (n == 0)
{
return (0);
}

va_start(args, n);

for (; a < n; a++)
{
sum += va_arg(args, int);
}
va_end(args);

return (sum);
}
