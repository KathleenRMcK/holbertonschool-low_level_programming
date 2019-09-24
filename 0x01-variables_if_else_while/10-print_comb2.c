/**
 * main - print string from 00
 * to 99 w/ comma and space
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
int i, j;
for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
putchar(i);
putchar(j);
if (i != 57 || j != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
return (0);
}
