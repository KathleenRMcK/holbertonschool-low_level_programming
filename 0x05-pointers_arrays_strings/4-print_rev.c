/**
 * print_rev - print string in reverse
 * @s: string being printed
 * Return: String
 */
#include "holberton.h"
void print_rev(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
l = l - 1;
while (l >= '\0')
{
_putchar(s[l]);
l--;
}
_putchar('\n');
}
