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
 * append_text_to_file - Adds text to file
 * @filename: file pointer
 * @text_content: holder of text
 * Return: Successful appending
 */
int append_text_to_file(const char *filename, char *text_content)
{
        int helper = 0, length, hold;

	if (!filename)
	        return (-1);
	helper = open(filename, O_WRONLY | O_APPEND);
	if (!text_content)
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
	close(helper);
	return (1);
}
