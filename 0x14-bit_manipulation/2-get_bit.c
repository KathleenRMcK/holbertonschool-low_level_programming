/**
 * get_bit - returns value of bit at given index
 * @n: int being searched
 * @index: index being returned
 * Return: Output
 */
#include "holberton.h"
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
