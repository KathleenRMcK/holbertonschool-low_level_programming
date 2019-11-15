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
 * _strdup - duplicate string
 * @str: string being duplicated
 * Return: 0
 */
#include "holberton.h"
char *_strdup(char *str)
{
	int l, length;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	length = _strlen(str);
	duplicate = malloc(sizeof(char) * length + 1);
	if (duplicate == NULL)
		return (NULL);
	for (l = 0; l < length; l++)
		duplicate[l] = str[l];
	duplicate[length] = str[length];
	return (duplicate);
}
