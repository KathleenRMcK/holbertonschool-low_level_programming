/**
 * puts_half - print half of string
 * @str: string being printed
 * Return: String
 */
#include "holberton.h"
void puts_half(char *str)
{
int l, m;
while (str[l] != '\0')
l += 1;
m = l / 2;
if (l % 2 == 1)
m += 1;
while (str[m] != '\0')
{
_putchar(*(str + m));
m++;
}
_putchar('\n');
}
