#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails or either nmemb or size is 0, it returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *val;
unsigned int a;

if (nmemb == 0 || size == 0)
return (NULL);

val = malloc(nmemb * size);

if (val == NULL)
return (NULL);

a = 0;
while (a < (nmemb * size))
{
val[a] = 0;
a++;
}

return (val);
}
