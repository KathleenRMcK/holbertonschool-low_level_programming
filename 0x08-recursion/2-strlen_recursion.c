/**
 * _strlen_recursion - length of a string
 * @s: string being measured
 * Return: Output
 */
#include "holberton.h"
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		l = _strlen_recursion(s + 1);
		l++;
	}
	return (l);
}
