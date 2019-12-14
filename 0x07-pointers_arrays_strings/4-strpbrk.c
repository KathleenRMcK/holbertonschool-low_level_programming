/**
 * _strpbrk - search string for set of bytes
 * @s: string being checked
 * @accept: accepted bytes
 * Return: Output
 */
#include "holberton.h"
char *_strpbrk(char *s, char *accept)
{
	int l, m;

	for (l = 0; s[l] != '\0'; l++)
	{
		for (m = 0; accept[m] != '\0'; m++)
			if (accept[m] == s[l])
			{
				return (&s[l]);
			}
	}
	return (0);
}
