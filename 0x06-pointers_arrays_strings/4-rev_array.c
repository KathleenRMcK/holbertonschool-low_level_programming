/**
 * reverse_array - reverses content of array
 * @a: array
 * @n: contents
 * Return: Output
 */
#include "holberton.h"
void reverse_array(int *a, int n)
{
	int l, m, temp;

	l = 0;
	m = n / 2;
	n = n - 1;
	while (l < m)
	{
		temp = a[l];
		a[l] = a[n - l];
		a[n - l] = temp;
		l += 1;
	}
}
