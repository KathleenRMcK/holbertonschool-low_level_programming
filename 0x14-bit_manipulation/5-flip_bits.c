/**
 * flip_bits - returns num of bits needed to flip
 * @n: first number
 * @m: second number
 * Return: Output
 */
#include "holberton.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int checker = 0, flip;

	flip = (n ^ m);
	while (flip)
	{
		checker += (flip & 1);
		flip >>= 1;
	}
	return (checker);
}
