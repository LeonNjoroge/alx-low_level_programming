#include "hash_tables.h"

/**
 * hash_djb2 - implementation of Hash function on djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */


unsigned long int hash_djb2(const unsigned char *str)
{
int l;
unsigned long int table;

table = 5381;
while ((l = *str++))
{
table = ((table << 5) + table) + l;

}
return (table);
}
