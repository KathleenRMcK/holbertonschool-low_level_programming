/**
 * main - minimum number of coins to make change
 * @argc: count
 * @argv: vector
 * Return: Output
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int coins, price;

	price = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	while (coins > 0)
	{
	if (coins >= 25)
	{
		coins -= 25;
		price += 1;
	}
	else if (coins >= 10)
	{
		coins -= 10;
		price += 1;
	}
	else if (coins >= 5)
	{
		coins -= 5;
		price += 1;
	}
	else if (coins >= 2)
	{
		coins -= 2;
		price += 1;
	}
	else
	{
		coins -= 1;
		price += 1;
	}
	}
	printf("%d\n", price);
	return (0);
}
