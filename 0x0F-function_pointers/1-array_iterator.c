#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an integer array
 * @array: The array to be operated on
 * @size: The size of the array
 * @action: A pointer to a function that operates on each element of the array
 *
 * Description: This function takes an integer array, its size, and a function
 * pointer. If the array and function pointer are not NULL, it applies the
 * function to each element of the array.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;

if (array && action)
{
i = 0;
while (a < size)
{
action(array[a]);
a++;
}
}
}
