#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *   Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
char *copy_val;
unsigned long int ind, m;
hash_node_t *other;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}
copy_val = strdup(value);
if (copy_val == NULL)
return (0);
ind = key_index((const unsigned char *)key, ht->size);
for (m = ind; ht->array[m]; m++)
{
if (strcmp(ht->array[m]->key, key) == 0)
{
free(ht->array[m]->value);

ht->array[m]->value = copy_val;
return (1);
}
}
other = malloc(sizeof(hash_node_t));
if (other == NULL)
{
free(copy_val);
return (0);
}
other->key = strdup(key);
if (other->key == NULL)
{
free(other);
return (0);
}
other->value = copy_val;
other->next = ht->array[ind];
ht->array[ind] = other;
return (1);
}
