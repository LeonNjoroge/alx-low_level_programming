#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *nd, *temp;
	hash_table_t *header = ht;
	unsigned long int m;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			nd = ht->array[m];

			while (nd != NULL)
			{
				temp = nd->next;
				free(nd->key);

				free(nd->value);
				free(nd);

				nd = temp;
			}
		}
	}
	free(header->array);

	free(header);
}