#include "function_pointers.h"


/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: A function pointer to a function that prints the name
 *
 * Description: This function takes a name and a function pointer. If the name
 * and function pointer are not NULL, it calls the function to print the name.
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
