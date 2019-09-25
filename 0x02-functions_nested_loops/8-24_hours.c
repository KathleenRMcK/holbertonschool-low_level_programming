/**
 *main - pring from 0000 to 2359
 *
 *return: 0
 */
#include "holberton.h"
void jack_bauer(void)
{
int i, j, k, l;
for (i = 48; i <= 50; i++)
{
for (j = 48; j <= 57; j++)
{
for (k = 48; k <= 53; k++)
{
for (l = 48; l <= 57; l++)
_putchar(i);
_putchar(j);
_putchar(58);
_putchar(k);
_putchar(l);
}
}
}
}
