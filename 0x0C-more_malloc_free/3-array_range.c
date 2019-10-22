/**
 * array_range - creates array of integers
 * @min: minimum size
 * @max: maximum size
 * Return: 0
 */
#include "holberton.h"
int *array_range(int min, int max)
{
	int l, m, *twod;

	if (min > max)
		return (NULL);
	twod = malloc(sizeof(int) * (max - min + 1));
	if (twod == NULL)
		return (NULL);
	for (l = 0, m = min; m <= max; l++, m++)
		twod[l] = m;
	return (twod);
}
