/**
 * main - print 0 to 9 with comma and space
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
int i;
i = 0;
while (i <= 9)
{
putchar(i);
if (i != 9)
{
putchar(',');
putchar(' ');
}
i++;
}
putchar('\n');
return (0);
}
