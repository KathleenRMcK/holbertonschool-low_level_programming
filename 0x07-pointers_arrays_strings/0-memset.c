/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: memory being filled
 * Return: Output
 */
#include "holberton.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
	s[m] = b;
	}
return (s);
}
