/**
 * print_alphabet_x10 - print a to z ten times
 *
 * Return: 0
 */
#include "holberton.h"
void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
