#include "hash_tables.h"


/**
 * key_index - gives you index of key
 * @key: key being indexed
 * @size: size of array
 * Return: index where stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
