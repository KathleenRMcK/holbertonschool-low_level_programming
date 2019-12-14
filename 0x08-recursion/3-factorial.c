/**
 * factorial - returns factorial of given number
 * @n: number being given
 * Return: Output
 */
#include "holberton.h"
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
