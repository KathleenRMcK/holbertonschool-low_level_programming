/**
 * print_square - print square using #
 * @size: size of square
 * Return: Output
 */
#include "holberton.h"
void print_square(int size)
{
int i, j;
if (size >= 0)
{
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
if (size <= 0)
{
_putchar('\n');
}
}
