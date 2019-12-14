/**
 * print_number - prints an integer
 * @n: integer being printed
 * Return: Output
 */
#include "holberton.h"
void print_number(int n)
{
	unsigned int prints;

	if (n < 0)
	{
		_putchar('-');
		prints = -n;
	}
	else
		prints = n;
	if (prints / 10)
		print_number(prints / 10);
	_putchar(prints % 10 + '0');
}
