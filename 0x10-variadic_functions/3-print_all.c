#include "variadic_functions.h"

/**
 * print_all - Print various data types based on a given format
 * @format: A string containing format specifiers
 * @...: The variadic arguments to be printed
 */


void print_all(const char * const format, ...)
{
va_list arg_list;
unsigned int a = 0, b = 0, c = 0;
char *val;
const char args[] = "cifs";
va_start(arg_list, format);
while (format && format[a])
{
b = 0;
while (args[b])
{
if (format[a] == args[b] && c)
{
printf(", ");
break;
} b++;
}
switch (format[a])
{
case 'c':
printf("%c", va_arg(arg_list, int)), c = 1;
break;
case 'i':
printf("%d", va_arg(arg_list, int)), c = 1;
break;
case 'f':
printf("%f", va_arg(arg_list, double)), c = 1;
break;
case 's':
val = va_arg(arg_list, char *), c = 1;
if (!val)
{
printf("(nil)");
break;
}
printf("%s", val);
break;
} a++;
}
printf("\n"), va_end(arg_list);
}
