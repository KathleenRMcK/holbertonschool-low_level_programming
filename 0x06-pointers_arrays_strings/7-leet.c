/**
 * leet - encodes string into 1337
 * @str: string being printed
 * Return: Output
 */
#include "holberton.h"
char *leet(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	if (str[l] == 'a' || str[l] == 'A')
	{
		str[l] = '4';
	}
	if (l == 'e' || l == 'E')
	{
		str[l] = '3';
	}
	if (l == 'o' || l == 'O')
	{
		str[l] = '0';
	}
	if (l == 't' || l == 'T')
	{
		str[l] = '7';
	}
	if (l == 'l' || l == 'L')
	{
		str[l] = '1';
	}
	return (str);
}
