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
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */
#include "holberton.h"
char *str_concat(char *s1, char *s2)
{
	int l, sone, stwo;
	char *catstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sone = _strlen(s1);
	stwo = _strlen(s2);
	catstr = malloc(sizeof(char) * (sone + stwo + 1));
	if (catstr == NULL)
		return (NULL);
	for (l = 0; l < sone; l++)
		catstr[l] = s1[l];
	for (; l < sone + stwo; l++)
		catstr[l] = s2[l - sone];
	catstr[sone + stwo] = '\0';
	return (catstr);
}
