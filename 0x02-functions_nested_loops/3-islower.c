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
