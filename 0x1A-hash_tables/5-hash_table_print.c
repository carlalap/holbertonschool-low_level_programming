#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table by index number
 * @ht: The hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *value_n;

	int is_printed = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		value_n = ht->array[i];
		for (; value_n != NULL; value_n = value_n->next)
		{
			if (is_printed == 1)
				printf(", ");

			printf("'%s': '%s'", value_n->key, value_n->value);

			is_printed = 1;
		}
	}
	printf("}\n");
}
