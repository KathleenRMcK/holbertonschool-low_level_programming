/**
 * isprime - tests if prime
 * @n: input
 * @p:tested prime
 * Return: Output
 */
int isprime(int n, int p)
{
	if (n <= 1)
	{
		return (0);
	}
	if (p > (n / 2))
	{
		return (1);
	}
	if ((n % p) == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (isprime(n, ++p));
}

/**
 * is_prime_number - returns 1 if input is prime
 * @n: input                                              * Return: Output
 */
#include "holberton.h"
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isprime(n, 3));
}
