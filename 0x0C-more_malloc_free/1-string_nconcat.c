/**
 * _strlen - return length of string
 * @s: string being measured
 * Return: length of string
 */
#include "holberton.h"
int _strlen(char *s)
{
	int t = 0;

	while (s[t] != '\0')
	{
		t += 1;
	}
	return (t);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: number of bytes
 * Return: 0
 */
#include "holberton.h"
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, sone, stwo;
	char *strcat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sone = _strlen(s1);
	stwo = _strlen(s2);
	if (n > stwo)
		n = stwo;

	strcat = malloc(sizeof(char) * (sone + n + 1));
	if (strcat == NULL)
		return (NULL);
	for (l = 0; l < sone; l++)
		strcat[l] = s1[l];
	for (; l < sone + n; l++)
		strcat[l] = s2[l - sone];
	strcat[sone + n] = '\0';
	return (strcat);
}
