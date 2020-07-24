#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: pointer to head
 * @idx: index
 * @n: data type
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int count = 0;

	if (head == NULL && *head == NULL)
		return (NULL);
	temp = *head;
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == 0)
			return (NULL);
		new->n = n;
		new->next = temp;
		*head = new;
		return (new);
	}
	while (temp)
	{
		if (count + 1 == idx)
		{
			new = malloc(sizeof(listint_t));
			if (new == 0)
				return (NULL);
			new->n = n;
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
