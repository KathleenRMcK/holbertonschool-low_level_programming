#include "lists.h"
/**
 * add_dnodeint - Adds a new node to beginning of list
 * @head: Beginning of list
 * @n: List being added to
 * Return: Success
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node_help;

	node_help = malloc(sizeof(dlistint_t));
	if (node_help == NULL)
		return (NULL);

	node_help->n = n;
	node_help->next = *head;
	node_help->prev = NULL;

	if (*head)
		(*head)->prev = node_help;
	*head = node_help;

	return (node_help);
}
