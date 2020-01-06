#include "monty.h"

/**
 * add_node - add new node to beginning of list
 * @head: pointer of first node
 * @str: string being added to
 * Return: Output
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *newnode;

	len = 0;
	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	while (str[len])
		len++;
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}

/**
 * add_node_end - add node to end
 * @head: pointer to beginning of str
 * @str: string
 * Return: Output
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail;
	list_t *newnode;
	int l;

	tail = *head;
	for (l = 0; str[l] != '\0'; l++)
		newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = l;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = newnode;
	return (newnode);
}

/**
 * oppush - opcode push function
 * @checker: checks for function
 * @whichone: catalogue of functions
 * Return: Output
 */
void oppush(unsigned int checker, const list_t *whichone)
{
	char arg[128] = "";
	unsigned int finder = 0;
	int found;
	char *holder;

	holder = strtok(NULL, " \t");
	if (holder)
	{
		if (holder[0] == '\n')
			push_error(whichone, checker);
		while (finder < strlen(holder);
		{
			if(!isdigit(holder[finder] && holder [0] != '-'
				    && holder[finder] != '\n')
			   push_error(whichone, checker);
		}
		finder++;
			found = atoi(holder);
	}
	else
	{
		dprintf(STDERR_FILENO, "L%u: usage: push integer\n", checker);
		free_all(stack);
		exit(EXIT_FAILURE);
	}
	if (global.queue)
		add_node_end(whichone, found);
	else
		add_node(whichone, found);
}
