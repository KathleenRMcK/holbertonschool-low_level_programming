/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Output
 */
#include "holberton.h"
char *_strstr(char *haystack, char *needle)
{
	int l, m;

	for (l = 0; haystack[l] != '\0'; l++)
	{
		for (m = 0; needle[m] != '\0'; m++)
			if (haystack[l + m] != needle[m])
			{
				break;
			}
		if (needle[m] == '\0')
		{
			return (haystack + l);
		}
	}
	return (0);
}
