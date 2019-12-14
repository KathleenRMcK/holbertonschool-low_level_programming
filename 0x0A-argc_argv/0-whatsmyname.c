/**
 * main - program that prints its name
 * @argc: count
 * @argv: vector
 * Return: Output
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
		printf("%s\n", argv[l]);
	}
	return (0);
}
