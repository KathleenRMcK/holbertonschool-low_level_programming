/**
 * print_diagonal - print diagonal line in terminal
 * @n: lines being printed
 * Return: Output
 */
#include "holberton.h"
void print_diagonal(int n)
{
int i, j;
if (n > 0)
{
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i - 1; j++)
{
if (i == 0 && j == 0)
{
_putchar(92);
}
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
}
