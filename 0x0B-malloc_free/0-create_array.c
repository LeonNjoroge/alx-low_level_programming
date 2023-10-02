#include "main.h"
11;rgb:0000/0000/0000#include <stdlib.h>

/**
 * create_array - Create an array of characters and initialize it
 *with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the newly created array,
 *or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *arr;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	unsigned int j;

	j = 0;

	while (j < size)
	{
		arr[j] = c;
		j++;
	}

	return (arr);
}
