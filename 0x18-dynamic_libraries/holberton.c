/**
 *Functions for libholberton.so
 */

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - function checks for lowercase
 * @c: character being checked
 * Return: Output
 */
#include "holberton.h"
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/**
 * _isalpha - check for alphabetic character
 * @c: character being checked
 * Return: 1 if character
 */
#include "holberton.h"
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

/**
 * _abs - computes absolute value
 * @i: number being checked
 * Return: Output
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}

/**
 * _isupper - check for uppercase character
 * @c: character being checked
 * Return: 1 if upper
 */
#include "holberton.h"
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

/**
 * _isdigit - checks for digit
 * @c: character being checked
 * Return: 1 if number
 */
#include "holberton.h"
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

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
 * _puts - prints a string followed by \n
 * @str: string to print
 * Return: String
 */
#include "holberton.h"
void _puts(char *str)
{
	int l = 0;
	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l += 1;
	}
	_putchar('\n');
}

/**
 * _strcpy - copy string to buffer
 * @dest: where copy is going
 * @src: where copy is from
 * Return: pointer to dest
 */
#include "holberton.h"
char *_strcpy(char *dest, char *src)
{
	int l;
	for (l = 0; src[l] != '\0'; l++)
		dest[l] = src[l];
	dest[l] = '\0';
	return (dest);
}

#include "holberton.h"
/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: Outcome
 */
int _atoi(char *s)
{
	int n;
	int pos;
	int neg;

	n = 0;
	pos = 0;
	neg = 1;
	if (*s == '\0')
		return (0);
	else if (s[0] == '-')
	{
		neg = -1;
		n++;
	}
	for (; s[n] != '\0'; n++)
	{
		if (s[n] <= '0' || s[n] >= '9')
			return (0);
		pos = pos * 10 + s[n] - '0';
	}
	return (neg * pos);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: Output
 */
#include "holberton.h"
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int m = 0;

	while (dest[l] != '\0')
	{
		l += 1;
	}
	while (src[m] != '\0')
	{
		dest[l] = src[m];
		l += 1;
		m += 1;
	}
	return (dest);
}

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: bytes from source
 * Return: Output
 */
#include "holberton.h"
char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	l = 0;
	m = 0;
	while (dest[l] != '\0')
	{
		l += 1;
	}
	while (src[m] != '\0' && m < n)
	{
		dest[l] = src[m];
		l += 1;
		m += 1;
	}
	return (dest);
}

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: bytes written
 * Return: Output
 */
#include "holberton.h"
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	for (l = 0; l < n && src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	for (l = l; l < n; l++)
	{
		dest[l] = '\0';
	}
	return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: Output
 */
#include "holberton.h"
int _strcmp(char *s1, char *s2)
{
	int l;

	l = 0;
	while ((s1[l] != '\0' || s2[l] != '\0') && s1[l] == s2[l])
	{
		l++;
	}
	return (s1[l] - s2[l]);
}

/**
 * _memset - fills memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: memory being filled
 * Return: Output
 */
#include "holberton.h"
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}

/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: copied memory
 * @n: amount copied
 * Return: Output
 */
#include "holberton.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}

/**
 * _strchr - locates character in string
 * @s: string searched
 * @c: character found
 * Return: Output
 */
#include "holberton.h"
char *_strchr(char *s, char c)
{
	unsigned int m;

	for (m = 0; s[m] >= '\0'; m++)
		if (s[m] == c)
		{
			return (&s[m]);
		}
	return ('\0');
}

/**
 * _strspn - length of prefix string
 * @s: segment of string
 * @accept: bytes accepted
 * Return: Output
 */
#include "holberton.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int m;
	unsigned int n;
	unsigned int o;

	for (m = 0; s[m] > ' '; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
			if (accept[n] == s[m])
			{
				o++;
			}
	}
	return (o);
}

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
