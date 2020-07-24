#include "hash_tables.h"


/**
 * hash_table_set - add an element to hash table
 * @ht: hash table pointer
 * @key: key pointer
 * @value: key value
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int help, index;
	char *copy;
	hash_node_t *new;

	if (ht == NULL || *key == 48 || value == NULL)
		return (0);
	copy = strdup(value);
	if (copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (help = index; ht->array[help]; ++help)
	{
		if (strcmp(ht->array[help]->key, key) == 0)
		{
			free(ht->array[help]->value);
			ht->array[help]->value = copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(copy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = copy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
