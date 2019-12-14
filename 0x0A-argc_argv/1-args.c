/**
 * main - prints number of arguements passed
 * @argc: count
 * @argv: vector
 * Return: Output
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; argv[l] != '\0'; l++)
	{
		break;
	}
	printf("%d\n", argc - 1);
	return (0);
}
