/**
 * binary_to_uint - binary num to unsigned int
 * @b: binary string
 * Return: Output
 */
#include "holberton.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int base, sum;

	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	length--;
	for (base = 1, sum = 0; length > 0; length--)
	{
		if (b[length] == '0')
		{
			base *= 2;
			continue;
		}
		else if (b[length] == '1')
		{
			sum += base;
			base *= 2;
			continue;
		}
		return (0);
	}
	return (sum);
}
