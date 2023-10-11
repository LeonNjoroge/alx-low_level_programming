#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: The array to search in
 * @size: The size of the array
 * @cmp: A pointer to the comparison function
 *
 * Description: This function searches for an integer in the given array by
 * applying the comparison function to each element. If the array, comparison
 * function, and size are valid and the comparison function returns true for an
 * element, the index of that element is returned. If no match is found, or
 * if size is less than or equal to 0, -1 is returned.
 *
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
return (a);
}
}
return (-1);
}
