/**
 * main - print a string using _putchar
 *
 * Return: 0
 */
#include "holberton.h"
int main(void)
{
int i;
char s[] = "Holberton\n";
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
return (0);
}
