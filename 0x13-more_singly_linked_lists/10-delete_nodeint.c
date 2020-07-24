#include "lists.h"


/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: pointer to head
 * @index: where to delete
 * Return: 1 if succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = *head;
	listint_t *node_help;

	if (temp && (!index))
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (count + 1 == index)
		{
			node_help = temp->next;
			if (node_help)
			{
				temp->next = node_help->next;
				free(node_help);
				return (1);
			}
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
