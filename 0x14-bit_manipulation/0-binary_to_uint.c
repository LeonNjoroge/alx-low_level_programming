#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: A pointer to a string containing a binary number.
 *
 * Return: The converted unsigned int, or 0 if there's an error.
 */

unsigned int binary_to_uint(const char *b)
{
int b_two, size;
unsigned int m = 0;

if (!b)
{
return (0);
}

size = 0;

while (b[size] != '\0')
{
size++;
}
for (size--, b_two = 1; size >= 0; size--, b_two *= 2)
{
if (b[size] != '0' && b[size] != '1')
return (0);

if (b[size] & 1)
m += b_two;

}
return (m);
}
