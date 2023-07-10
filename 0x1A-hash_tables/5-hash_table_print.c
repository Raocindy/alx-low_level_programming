#include "./hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table.
 *
 * Description: Print a key/value pair of hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int c;
	int pop = 1;
	hash_node_t *my_node;

	if (ht == NULL)
		return;

	printf("{");
	for (c = 0; c < ht->size; c++)
	{
		my_node = ht->array[c];
		while (my_node != NULL)
		{
			if (!pop)
				printf(", ");
			printf("'%s': '%s'", my_node->key, my_node->value);
			pop = 0;
			my_node = my_node->next;
		}
	}
	printf("}\n");
}
