#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: The array to search in
 * @size: The size of the array
 * @cmp: A pointer to the comparison function
 *
 * Description: This function searches for an integer in the given array
 * Return: The index of the first matching element or -1 if no match or invalid
 * parameters.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;
a = 0;

if (array && cmp)
{
if (size <= 0)
{
return (-1);
}

while (a < size)
{
if (cmp(array[a]))
{
return (a);
}
a++;
}
}
return (-1);
}
