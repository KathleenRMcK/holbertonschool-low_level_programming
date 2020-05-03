#include "lists.h"
/**
 * get_dnodeint_at_index - Returns nth node of linked list
 * @head: Beginning of list
 * @index: Area being returned
 * Return: Node address or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int help;

	if (head == NULL)
		return (NULL);

	for (help = 0; help < index; help++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
