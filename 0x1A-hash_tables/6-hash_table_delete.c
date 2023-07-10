#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *my_node, *tmp;

	if (ht == NULL)
	{
		return;
	}

	for (c = 0; c < ht->size; c++)
	{
		my_node = ht->array[c];
		while (my_node != NULL)
		{
			tmp = my_node->next;
			free(my_node->key);
			free(my_node->value);
			free(my_node);
			my_node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
