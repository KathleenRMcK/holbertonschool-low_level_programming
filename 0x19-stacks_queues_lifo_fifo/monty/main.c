#include "monty.h"
/**
 * main - body of monty project
 * @argc: argument count
 * @argv: argument vector
 * Return: Output
 */
int main(int argc, char **argv)
{
	char buf[1024];
	unsigned int checker = 1;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	global.fp = fopen(argv[1], "r");
	if (!global.fp)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (global.fp, sizeof(buf))
	{
		token = strtok(buf, " \t");
		if (token[0] == '#')
		{
			(void) stack;
			(void checker;
			 break;
		}
		else if (token[0] != '\n')
		{
			char *opfinder(char *opcode, const list_t *whichone)
		}
			checker++;
	}
	free_all(&stack);
	return (EXIT_SUCCESS);
}
