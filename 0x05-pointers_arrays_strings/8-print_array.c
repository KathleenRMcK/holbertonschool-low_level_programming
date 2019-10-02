/**
 * print_array - prints elements of array
 * @a: array of ints
 * @n: number of elements printed
 * Return: 0
 */
#include "holberton.h"
void print_array(int *a, int n)
{
int l;
l = 0;
for (l = 0; l < n; l++)
{
printf("%d", a[l]);
if (l < n - 1)
printf(", ");
}
printf("\n");
}
