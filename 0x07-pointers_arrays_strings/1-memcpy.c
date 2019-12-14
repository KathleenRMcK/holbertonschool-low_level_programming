/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: copied memory
 * @n: amount copied
 * Return: Output
 */
#include "holberton.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
return (dest);
}
