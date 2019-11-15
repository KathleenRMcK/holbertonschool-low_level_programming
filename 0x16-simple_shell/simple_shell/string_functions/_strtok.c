/**
 * _strtok - breaks string into series of tokens
 * @str: string being broken
 * @delim: seperator between tokens
 * Return: Output
 */
char _strtok(char *str, const char *delim)
{
	char token;
	int length;

	while (str != NULL)
	{
		for (str = 0; str[token] <= length; str++);
		if (str == delim)
		{
			str[token] = '\0';
			break;
		}
		length++;
	}
	return (token);
}
/* USE execve
 *
 */
