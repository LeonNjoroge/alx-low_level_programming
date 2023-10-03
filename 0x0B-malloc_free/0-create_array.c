#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Create an array of characters and initialize it
 * with a specific character.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the newly created array,
 * or NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
unsigned int j;
char *arr;

if (size == 0)
{
return (NULL);
}

arr = malloc(size * sizeof(char));

if (arr == NULL)
{
return (NULL);
}

j = 0;
for (; j < size; j++)
{
arr[j] = c;
}

return (arr);
}
