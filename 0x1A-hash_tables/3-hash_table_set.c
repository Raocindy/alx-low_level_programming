#include "hash_tables.h"

/**
 * hash_table_set - Add an item to Hash table.
 * @ht: A pointer to the hash table.
 * @key: The key of the added item to the hash table.
 * @value: The pair value of the key.
 *
 * Return: Upon failure - 0.
 *         else - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash;
	char *value_copy;
	unsigned long int index, c;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (c = index; ht->array[c]; c++)
	{
		if (strcmp(ht->array[c]->key, key) == 0)
		{
			free(ht->array[c]->value);
			ht->array[c]->value = value_copy;
			return (1);
		}
	}

	new_hash = malloc(sizeof(hash_node_t));
	if (new_hash == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_hash->key = strdup(key);
	if (new_hash->key == NULL)
	{
		free(new_hash);
		return (0);
	}
	new_hash->value = value_copy;
	new_hash->next = ht->array[index];
	ht->array[index] = new_hash;

	return (1);
}
