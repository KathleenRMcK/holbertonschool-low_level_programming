/**
 * main - multiplies two numbers
 * @argc: count
 * @argv: vector
 * Return: Output
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int factor1, factor2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		factor1 = atoi(argv[1]);
		factor2 = atoi(argv[2]);
		product = ((factor1) * (factor2));
		printf("%d\n", product);
		return (0);
	}
}
