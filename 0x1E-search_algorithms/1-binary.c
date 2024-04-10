#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t m, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (m = left; m < right; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);

		m = left + (right - left) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			right = m - 1;
		else
			left = m + 1;
	}
	return (-1);
}
