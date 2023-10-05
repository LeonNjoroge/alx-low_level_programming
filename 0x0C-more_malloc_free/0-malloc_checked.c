#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, it exits with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *val;

val = malloc(b);

if (val == NULL)
exit(98);

return (val);
}
