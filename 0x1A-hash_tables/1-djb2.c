#include "hash_tables.h"


/**
 * hash_djb2 - hash function implementing djb2 algorithm
 * @str: character string
 * Return: hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int table;
	int help;

	table = 5381;
	while ((help = *str++))
	{
		table = ((table << 5) + table) + help;
	}
	return (table);
}
