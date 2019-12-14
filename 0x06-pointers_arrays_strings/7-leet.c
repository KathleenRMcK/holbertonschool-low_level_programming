/**
 * leet - encodes string into 1337
 * @str: string being printed
 * Return: Output
 */
#include "holberton.h"
char *leet(char *s)
{
	int l, m, n;
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char swap[] = {'4', '3', '0', '7', '1'};

	for (l = 0; s[l] != '\0'; l++)
	{
		n = 0;
		for (m = 0; upper[m] != '\0' && lower[m] != '\0'; m++)
		{
			if ((s[l] == lower[m]) || (s[l] == upper[l]))
			{
				n = m;
				s[l] = swap[n];
			}
		}
	}
	return (s);
}
