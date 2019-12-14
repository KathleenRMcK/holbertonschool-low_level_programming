/**
 * main - main functionality of calculator
 * @argc: argument count
 * @argv: argument vector
 * Return: Output
 */
#include "3-calc.h"
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*result)(int, int);
	char operator;
	char sign = argv[2][0];

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = *argv[2];
	result = (get_op_func(operator));

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0' && sign != '+' && sign != '-' &&
	    sign != '*' && sign != '/' && sign != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == '\0' && (sign == '/' || sign == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result(num1, num2));
	return (0);
}
