#include "search_algos.h"

/**
  * jump_search - Searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  * Otherwise, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  * Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t m, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (m = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		m = jump;
		jump += step;
	}


	printf("Value found between indexes [%ld] and [%ld]\n", m, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; m < jump && array[m] < value; m++)
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);
	printf("Value checked array[%ld] = [%d]\n", m, array[m]);

	return (array[m] == value ? (int)m : -1);
}
