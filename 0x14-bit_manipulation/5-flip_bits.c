#include "main.h"

/**
 * flip_bits - Count the number of bits needed
 * to flip to convert one number to another.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits to flip to convert n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int i;
i = 0;

for (n || m; n >>= 1, m >>= 1)
{
if ((n & 1) != (m & 1))
i++;
}
return (i);
}
