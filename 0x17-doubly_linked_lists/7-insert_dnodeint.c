#include "lists.h"
/**
 * insert_dnodeint_at_index - Function to insert node at given position
 * @h: Top of list
 * @idx: Given position
 * @n: Node being inserted
 * Return: Output
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *insert = malloc(sizeof(dlistint_t));
	unsigned int count = 1;

	if (!h)
		return (NULL);
	if (insert == NULL)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	insert->n = n;

	if (idx == 0)
	{
		if (*h)
			temp->prev = insert;
		*h = insert;
		insert->next = temp;
		insert->prev = NULL;
		return (insert);
	}
	while (count < idx)
	{
		temp = temp->next;
		count++;
		if (temp == NULL)
		{
			free(insert);
			return (NULL);
		}
	}
	insert->prev = temp;
	insert->next = temp->next;
	if (temp->next)
	{
		temp->next->prev = insert;
	}
	temp->next = insert;
	return (insert);
}
