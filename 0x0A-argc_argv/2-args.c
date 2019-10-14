/**
 * main - prints all arguements passed on new line
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
