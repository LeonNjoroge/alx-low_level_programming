#include "main.h"


/**
 * set_bit - Set a bit at a specified index to 1.
 * @n: A pointer to an unsigned long integer in which to set the bit.
 * @index: The index of the bit to set to 1 (0-based).
 *
 * Return: 1 if the operation is successful, or -1 if an error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int  i;

if (index > 63)
{
return (-1);
}

i = 1 << index;
*n = (*n | i);

return (1);
}
