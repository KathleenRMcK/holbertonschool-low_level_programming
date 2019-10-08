/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: Output
 */
#include "holberton.h"
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
	while (*haystack != '\0' && *needle != '\0' && *haystack == *needle)
	{
		needle++;
		haystack++;
	}
	if (*needle == '\0')
		haystack += 1;
	return (haystack);
	}
	return (NULL);
}
