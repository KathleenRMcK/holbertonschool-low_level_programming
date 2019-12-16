#include "lists.h"
/**
 * add_dnodeint_end - Function that adds new node at end of list
 * @head: Beginning of list
 * @n: Node being added
 * Return: Output
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	temp = *head;
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	new->prev = temp;

	return (new);
}
