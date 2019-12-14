/**
 * cap_string - capitalizes words of string
 * @str: string
 * Return: Output
 */
#include "holberton.h"
char *cap_string(char *str)
{
int l;
char c[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
while (str[l] != '\0')
{
	if (l == 0 && str[l] >= 97 && str[l] <= 122)
	{
		str[l] = str[l] - 32;
	}
	if (str[l] >= 97 && str[l] <= 122 && str[l] == c[l])
	{
		str[l] = str[l] - 32;
	}
	l++;
}
	return (str);
}
