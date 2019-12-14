/**
 * print_binary - print number in binary
 * @n: number to be printed
 * Return: Output
 */
#include "holberton.h"
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
