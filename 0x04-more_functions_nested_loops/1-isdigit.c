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
