#include "main.h"

/**
 * clear_bit - Clear a bit at a specified index, setting it to 0.
 * @n: A pointer to an unsigned long integer in which to clear the bit.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int i;

if (index > 63)
return (-1);

i = 1 << index;

if (*n & i)
*n ^= i;

return (1);
}
