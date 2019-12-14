/**
 * set_bit - sets bit at given index to 1
 * @n: number being changed
 * @index: index being swapped
 * Return: Output
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
