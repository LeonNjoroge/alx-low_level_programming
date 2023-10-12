#include "variadic_functions.h"


/**
 * print_strings - Print a variable number of strings with a separator
 * @separator: The string used to separate the strings
 * @n: The number of strings to print
 * @...: The variadic strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int a = 0;
char *val;

va_start(args, n);

while (a < n)
{
val = va_arg(args, char *);

if (val)
printf("%s", val);
else
printf("(nil)");

if (a < n - 1)
{
if (separator)
printf("%s", separator);
}

a++;
}

printf("\n");
va_end(args);
}
