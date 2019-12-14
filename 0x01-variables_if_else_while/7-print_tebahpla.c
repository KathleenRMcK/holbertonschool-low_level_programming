/**
 * main - print z to a using putchar
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
