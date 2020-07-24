#include "lists.h"


/**
 * add_nodeint_end - add new node at end of listint_t list
 * @head: pointer to head
 * @n: pointer for struct
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;
	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		        temp->next = new;
	}
	return (new);
}
