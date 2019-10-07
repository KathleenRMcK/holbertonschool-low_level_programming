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
	n = 0;
	while (n >= src)
	{
		src++;
	}
	if (n == src)
	{
		src = dest;
	}
return (dest);
}
