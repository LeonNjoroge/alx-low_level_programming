#include "variadic_functions.h"

/**
 * print_numbers - Print a variable number of integers with a separator
 * @separator: The string used to separate the numbers
 * @n: The number of integers to print
 * @...: The variadic integers to be printed
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int a = 0;

va_start(args, n);

for (; a < n; a++)
{
printf("%d", va_arg(args, int));
if (separator && a < n - 1)
printf("%s", separator);
}

printf("\n");
va_end(args);

}
