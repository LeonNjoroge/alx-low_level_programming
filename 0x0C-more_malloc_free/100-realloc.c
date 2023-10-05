#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block with a new size.
 * @ptr: A pointer to the previously allocated memory block.
 * @old_size: The old size of the memory block.
 * @new_size: The new size to allocate.
 *
 * Return: A pointer to the reallocated memory block.
 *         If malloc fails, it returns NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *ptr1, *ptr2;
unsigned int a;

if (new_size == old_size)
return (ptr);

if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}

if (ptr == NULL)
return (malloc(new_size));

ptr1 = malloc(new_size);
if (ptr1 == NULL)
return (NULL);

ptr2 = ptr;

if (new_size < old_size)
{
for (a = 0; a < new_size; a++)
ptr1[a] = ptr2[a];
}

if (new_size > old_size)
{
a = 0;
while (a < old_size)
{
ptr1[a] = ptr2[a];
a++;
}
}

free(ptr);
return (ptr1);
}
