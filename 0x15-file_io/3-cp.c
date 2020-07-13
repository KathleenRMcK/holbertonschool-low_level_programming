#include "holberton.h"
/**
 * main - copies content of file to other file
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int getter, finder, checker, helper, check_err_wr, check_err;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	finder = open(argv[1], O_RDONLY);
	if (finder == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	getter = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (getter == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((check_err = read(finder, buffer, 1024)) > 0)
	{
		check_err_wr = write(getter, buffer, check_err);
		if (check_err_wr != check_err)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (check_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                exit(98);
	}
	checker = close(finder);
	if (checker == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", finder), exit(100);
	helper = close(getter);
	if (check_err == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", getter), exit(100);
	return (0);
}
