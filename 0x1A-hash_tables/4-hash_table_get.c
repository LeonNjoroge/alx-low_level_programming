#include "hash_tables.h"

/**
 * hash_table_get - Get value associated with a key
 * in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * Return: Value associated with key in ht
 * otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int pos;
    hash_node_t *nd;


	if (ht == NULL || key == NULL || *key == '\0')
        {
		return (NULL);
        }

	pos = key_index((const unsigned char *)key, ht->size);

	if (pos >= ht->size)
        {
		return (NULL);
        }

	nd = ht->array[pos];

	while (nd && strcmp(nd->key, key) != 0)
        {
		nd = nd->next;
        }
	return ((nd == NULL) ? NULL : nd->value);

}
