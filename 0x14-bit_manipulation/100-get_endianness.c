#include "main.h"

/**
 * get_endianness - Check the endianness of the system.
 *
 * Return: 0 if the system is big-endian, 1 if it's little-endian.
 */

int get_endianness(void)
{
unsigned int m;
char *h;

m = 1;
h = (char *) &m;

return ((int)*h);
}
