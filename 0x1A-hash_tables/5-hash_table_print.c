#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 * Description: Val pairs are printed in the order
 *  they appear in the array of the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned char flag_com = 0;
hash_nd_t *nd;
unsigned long int m;


if (ht == NULL)
{
return;
}
printf("{");

for (m = 0; m < ht->size; m++)
{
if (ht->array[m] != NULL)
{
if (flag_com == 1)
{
printf(", ");
}

nd = ht->array[m];
while (nd != NULL)
{
printf("'%s': '%s'", nd->key, nd->value);
nd = nd->next;

if (nd != NULL)
printf(", ");
}
flag_com = 1;
}
}
printf("}\n");
}
