#include "hash_tables.h"

/**
 * hash_table_get - Gets a value from a hash table using a key
 * @ht: The hash table
 * @key: The key
 * Return: The value of the key, aka the datum, or NULL if failed
 */


char *hash_table_get(const hash_table_t *ht, const char *key)

{
	unsigned long int position;
	hash_node_t *getnode;

	if (!ht || !key)
		return (NULL);

	position = key_index((const unsigned char *) key, ht->size);

	getnode = ht->array[position];

	for (; getnode != NULL; getnode = getnode->next)
	{
		if (strcmp(key, getnode->key) == 0)
			return (getnode->value);
	}
	return (NULL);
}
