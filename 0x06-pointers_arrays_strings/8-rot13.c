/**
 * rot13 - encodes string using rot13
 * @s: string being printed
 * Return: Output
 */
#include "holberton.h"
char *rot13(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	if ((s[l] >= 'a' && s[l] <= 'm') || (s[l] >= 'A' && s[l] <= 'M'))
	{
		s[l] = (s[l] + 13);
	}
	while ((s[l] >= 'n' && s[l] <= 'z') || (s[l] >= 'N' && s[l] <= 'Z'))
	{
		s[l] = (s[l] - 13);
	}
	return (s);
}
