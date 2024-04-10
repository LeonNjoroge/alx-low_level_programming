#include "search_algos.h"

/**
  * linear_search - Uses linear search to searches
  * for a value in an array of integers
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  *
  * Description: It prints a value every time it is compared in the array.
  */

int linear_search(int *array, size_t size, int value)
{
	size_t m;

	if (array == NULL)
		return (-1);
	for (m = 0; m < size; m++)
	{
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		if (array[m] == value)
			return (m);
	}
	return (-1);
}
