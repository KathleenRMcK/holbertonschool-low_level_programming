/**
 * print_sign - print sign of a number
 * @n: number being tested
 * Return: value of number
 */
#include "holberton.h"
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
