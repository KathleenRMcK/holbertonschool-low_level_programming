/**
 * _pow_recursion - value of x raised to power of y
 * @x: value
 * @y: to the power
 * Return: Output
 */
#include "holberton.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
