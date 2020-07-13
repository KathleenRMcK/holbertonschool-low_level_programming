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
 * create_file - Function that creates a file
 * @filename: file pointer
 * @text_content: file input
 * Return: Created file
 */
int create_file(const char *filename, char *text_content)
{
        int helper, length, hold;

	if (filename == NULL)
	{
	        return (-1);
	}
	helper = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (helper == -1)
	{
	        return (-1);
	}
	if (text_content == NULL)
	{
	        if (close(helper) == -1)
		{
		        return (-1);
		}
		else
		{
		  return (1);
		}
	}
	length = _strlen(text_content);
	hold = write(helper, text_content, length);
	if (hold == -1)
	{
	        return (-1);
	}
	return (1);
}
