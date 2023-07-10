#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;

	hash = 5381;
	for (; *str != '\0'; str++)
	{
		hash = ((hash << 5) + hash) + (unsigned long)(*str);
	}

	return (hash);
}
