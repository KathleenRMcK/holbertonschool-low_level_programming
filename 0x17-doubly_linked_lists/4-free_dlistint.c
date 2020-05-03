#include "lists.h"
/**
 * free_dlistint - Frees a list
 * @head: Beginning of list
 * Return: Success
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *help;

	while (head)
	{
		help = head;
		head = head->next;
		free(help);
	}
}
