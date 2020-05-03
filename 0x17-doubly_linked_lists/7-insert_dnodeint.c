#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at given position
 * @h: List being sorted
 * @idx: Area where new node is added
 * @n: Node being inserted
 * Return: Node address or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_help;
	dlistint_t *holder = *h;
	unsigned int temp;

	if (!h)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);

	node_help = malloc(sizeof(dlistint_t));
	if (node_help == NULL)
		return (NULL);
	node_help->n = n;

	if (idx == 0)
	{
		if (*h)
			holder->prev = node_help;
		*h = node_help;
		node_help->prev = NULL;
		node_help->next = holder;
		return (node_help);
	}
	for (temp = 1; temp < idx; temp++)
	{
		holder = holder->next;
		if (holder == NULL)
		{
			free(node_help);
			return (NULL);
		}
	}
	node_help->prev = holder;
	node_help->next = holder->next;
	if (holder->next)
		holder->next->prev = node_help;
	holder->next = node_help;
	return (node_help);
}
