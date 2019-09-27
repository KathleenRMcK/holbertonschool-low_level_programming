/**
 * more_numbers - print 0 to 14 ten times
 * @i: number of times printed
 * @j: print 0 to 14
 * Return: Output
 */
#include "holberton.h"
void more_numbers(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 14; j++)
if (j >= 10)
{
_putchar(j / 10);
}
_putchar(j % 10);
_putchar('\n');
}
}
