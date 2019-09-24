/**
 * main - print 0 to 9 with comma and space
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
int i;
for (i = 48; i <= 57; i++)
{
if (i != 57)
{
putchar(',');
putchar(' ');
}
putchar('\n');
}
return (0);
}
