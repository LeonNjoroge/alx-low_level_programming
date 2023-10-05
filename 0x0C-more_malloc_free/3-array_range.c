#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max (inclusive).
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the allocated array of integers.
 *         If malloc fails or min is greater than max, it returns NULL.
 */
int *array_range(int min, int max)
{
int *arr;
int len = 0, tmp = 0;

if (min > max)
return (NULL);

len = max - min + 1;

arr = malloc(len *sizeof(int));

if (arr == NULL)
return (NULL);

while (tmp < len)
{
arr[tmp] = min++;
tmp++;
}

return (arr);
}
