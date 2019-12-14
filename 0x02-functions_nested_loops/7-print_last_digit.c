/**
 * print_last_digit - print last digit of number
 * @i: number being checked
 * Return: Output
 */
#include "holberton.h"
int print_last_digit(int i)
{
i = i % 10;
if (i < 0)
{
_putchar(-i + 48);
return (-i);
}
else
{
_putchar(i + 48);
return (i);
}
}
