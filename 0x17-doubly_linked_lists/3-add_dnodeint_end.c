#include "lists.h"
/**
 * add_dnodeint_end - Adds new node to end of list
 * @head: Beginning of list
 * @n: Node being added
 * Return: Address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_help;
	dlistint_t *help = *head;

	node_help = malloc(sizeof(dlistint_t));
	if (node_help == NULL)
		return (NULL);

	node_help->n = n;
	node_help->next = NULL;

	if (*head == NULL)
	{
		node_help->prev = NULL;
		*head = node_help;
		return (node_help);
	}
	while (help->next)
		help = help->next;
	help->next = node_help;
	node_help->prev = help;

	return (node_help);
}
