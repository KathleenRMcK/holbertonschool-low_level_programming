#include "hash_tables.h"


/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table looking into
 * @key: key of the hash table
 * Return: value associated with element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *here;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	if (index >= ht->size)
		return (NULL);
	for (here = ht->array[index]; here && strcmp(here->key, key) != 0; here = here->next);
	if (here == NULL)
	{
		return (NULL);
	}
	else
	{
		return (here->value);
	}
}
