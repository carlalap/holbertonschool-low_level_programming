#include "hash_tables.h"

/**
 * hash_table_delete - deletes and frees hash table
 * @ht: hash table to beat
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *freeht, *temp;

	for (i = 0; i < ht->size; i++)
	{
		freeht = ht->array[i];

		while (freeht)
		{
			temp = freeht->next;
			free(freeht->key);
			free(freeht->value);
			free(freeht);
			freeht = temp;
		}
	}
	free(ht->array);
	free(ht);
}
