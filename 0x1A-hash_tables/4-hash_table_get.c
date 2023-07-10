#include "hash_tables.h"

/**
 * hash_table_get - Retrieve item from hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to get item from hash table.
 *
 * Return: return item in hash table or NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
