#include "main.h"

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The unsigned long integer from which to extract the bit.
 * @index: The index of the bit to retrieve (0-based).
 *
 * Return: The value of the bit at the specified index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int m;

if (n == 0 && index < 64)
return (0);

m = 0;

for (; m <= 63; n >>= 1, m++)
{
if (index == m)
return (n & 1);
}
return (-1);

}
