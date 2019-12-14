/**
 * main - add positive numbers
 * @argc: count
 * @argv: vector
 * Return: Output
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main(int argc, char *argv[])
{
	int add1, add2, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
	for (add1 = 1; add1 < argc; add1++)
	{
		for (add2 = 0; argv[add1][add2] != '\0'; add2++)
		if (!isdigit(argv[add1][add2]))
	{
			printf("Error\n");
			return (1);
		}
	sum = sum + atoi(argv[add1]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
