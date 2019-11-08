/**
 * clear_bit - sets value of bit at given index to 0
 * @n: number being converted
 * @index: index being changed
 * Return: Output
 */
#include "holberton.h"
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int swap;

	swap = 1 << index;
	*n = ((*n & ~swap) | ((0 << index) & swap));
	if (index > 63 || !n)
		return (-1);
	return (1);
}
