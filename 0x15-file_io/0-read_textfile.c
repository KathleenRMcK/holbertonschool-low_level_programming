#include "holberton.h"
/**
 * _strlen - return length of string
 * @s: string being measured
 * Return: length of string
 */
#include "holberton.h"
int _strlen(char *s)
{
        int t = 0;
	while (s[t] != '\0')
	{
	        t += 1;
	}
	return (t);
}

/**
 * read_textfile - function that reads textfiles
 * @filename: file pointer
 * @letters: letters being printed
 * Return: letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t helper;
	char *buffer;
	int file_help, read_help;

	buffer = malloc(sizeof(char) * letters);
	file_help = open(filename, O_RDONLY);
	if (file_help == -1)
	{
	        return (0);
	}
	if (!buffer)
	{
	        free(buffer);
	        return(0);
	}
	read_help = read(file_help, buffer, letters);
	if (read_help == -1)
	{
	        return (0);
	}
	helper = _strlen(buffer);
	helper = write(STDOUT_FILENO, buffer, helper);
	if (helper == -1)
	{
	        free(buffer);
		return (0);
	}
	free(buffer);
	if (close(file_help) == -1)
	{
	        return (-1);
	}
	else
	{
	        return (helper);
	}
}
