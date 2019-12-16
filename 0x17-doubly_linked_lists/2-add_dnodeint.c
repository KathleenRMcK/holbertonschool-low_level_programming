#include "lists.h"
/**
 * add_dnodeint - Function that adds new node to beginning of list
 * @head: Head of list
 * @n: Node being added
 * Return: Output
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
