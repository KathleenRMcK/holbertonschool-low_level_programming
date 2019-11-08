/**
 * get_endianness - checks endianness
 *
 * Return: 0 or 1
 */
#include "holberton.h"
int get_endianness(void)
{
	unsigned int l = 1;
	char *check = (char *) &l;

	return ((int) *check);
}
