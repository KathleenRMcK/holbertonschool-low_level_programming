/**
 * malloc_checked - allocate memory
 * @b: memory being allocated
 * Return: 0
 */
#include "holberton.h"
void *malloc_checked(unsigned int b)
{
	void *m;

	m = malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
