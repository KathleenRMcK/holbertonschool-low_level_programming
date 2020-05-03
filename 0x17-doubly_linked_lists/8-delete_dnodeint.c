#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index of linked list
 * @head: Beginning of list
 * @index: Area to be deleted
 * Return: 1 Success -1 Fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *holder = *head;
	unsigned int temp;

	if (!head || !(*head))
		return (-1);

	for (temp = 0; temp < index; temp++)
	{
		holder = holder->next;
		if (holder == NULL)
			return (-1);
	}
	if (index == 0)
	{
		if (holder->next)
			holder->next->prev = NULL;
		*head = holder->next;
	}
	else
	{
		if (holder->next)
			holder->next->prev = holder->prev;
		if (holder->prev)
			holder->prev->next = holder->next;
	}
	free(holder);
	return (1);
}
