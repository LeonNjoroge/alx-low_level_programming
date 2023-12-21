#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: a pointer to the new hash table or
 * If an error occurs - NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int m;
    hash_table_t *table;


	table = malloc(sizeof(hash_table_t));

    if (table == NULL)
        {
		return (NULL);
        }

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
        {
		return (NULL);
        }

	for (m = 0; m < size; m++)
        {
		table->array[m] = NULL;
        }
	return (table);

}
