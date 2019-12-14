/**
 * is_a_pal - checks if palindrome
 * @sf: string first
 * @sl: string last
 * Return: Output
 */
int is_a_pal(char *sf, char *sl)
{
	if (*sf != *sl)
		{
			return (0);
		}
	if (sf >= sl)
		{
			return (1);
		}
		return (is_a_pal(sf + 1, sl - 1));
}

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
	l = (_strlen_recursion(s + 1) + 1);
	return (l);
}

/**
 * is_palindrome - prints if palindrome
 * @s: string being checked
 * Return: Output
 */
#include "holberton.h"
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s);

	if (*s == '\0')
	{
		return (1);
	}
	return (is_a_pal(s, s + length - 1));
}
