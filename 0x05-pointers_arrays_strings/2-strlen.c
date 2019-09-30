/**
 * _strlen - return length of string
 * @s: string being measured
 * Return: length of string
 */
#include "holberton.h"
int _strlen(char *s)
{
for (s = 0; s != '\0'; s++)
if (s == '\0')
{
return (*s);
}
return (0);
}
