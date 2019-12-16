#include "lists.h"
/**
 * get_dnodeint_at_index - Function that returns nth node of list
 * @head: Beginning of list
 * @index: Finds nth node
 * Return: Output
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
