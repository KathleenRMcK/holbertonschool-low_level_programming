/**
 * _puts - prints a string followed by \n
 * @str: string to print
 * Return: String
 */
#include "holberton.h"
void _puts(char *str)
{
int l = 0;
while (str[l] != '\0')
{
_putchar(str[l]);
l += 1;
}
_putchar('\n');
}
