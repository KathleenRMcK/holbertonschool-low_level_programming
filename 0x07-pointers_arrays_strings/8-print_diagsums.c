/**
 * print_diagsums - sum of two diag of square ints
 * @a: array of ints
 * @size: size of two diagonals
 * Return: Output
 */
#include "holberton.h"
void print_diagsums(int *a, int size)
{
	int l, sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (l = 0; l < size; l++)
	{
		sum1 += a[l * (size + 1)];
		sum2 += a[(l + 1) * (size - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
