/**
 * puts2 - print every other character
 * @str: string being printed
 * Return: String
 */
#include "holberton.h"
void puts2(char *str)
{
int n;
n = 0;
while (str[n] != '\0')
{
if (n % 2 == 0)
{
_putchar(*(str + n));
}
n += 1;
}
_putchar('\n');
}
