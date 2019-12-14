/**
 * create_array - create array of characters
 * @size: size of array
 * @c: character being initialized
 * Return: 0
 */
#include "holberton.h"
char *create_array(unsigned int size, char c)
{
	unsigned int bee;
	char *butterfly;

	if (size == 0)
		return (NULL);
	butterfly = malloc(sizeof(char) * size);
	if (butterfly == NULL)
		return (NULL);
	for (bee = 0; bee < size; bee++)
		butterfly[bee] = c;
	return (butterfly);
}
