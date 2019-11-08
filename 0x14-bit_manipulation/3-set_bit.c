/**
 *
 *
 *
 */
#include "holberton.h"
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int swap;

	swap = 1 << index;
	*n = ((*n & ~swap) | ((1 << index) & swap));
	if (index > 63 || !n)
		return (-1);
	return (1);
}
