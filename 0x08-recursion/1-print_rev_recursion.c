/**
 * _print_rev_recursion - print string in reverse
 * @s: string being printed
 * Return: Output
 */
#include "holberton.h"
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
