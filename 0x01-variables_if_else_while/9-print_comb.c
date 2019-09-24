/**
 * main - print 0 to 9 with comma and space
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i <= '8')
{
putchar(',');
putchar(' ');
}
putchar('\n');
}
return (0);
}
