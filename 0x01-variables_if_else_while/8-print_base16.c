/**
 * main - print base 16 in lowercase
 *
 * Return: output
 */
#include <stdio.h>
int main(void)
{
int i;
int j;
for (i = 0; i <= 9; i++)
putchar(i);
for (j = 'a'; j <= 'f'; j++)
putchar(j);
putchar('\n');
return (0);
}
