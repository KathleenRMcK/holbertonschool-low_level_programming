#include "lists.h"


/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to head
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *null_help = NULL;
	listint_t *previous;

	while (head && *head)
	{
		previous = (*head)->next;
		(*head)->next = null_help;
		null_help = *head;
		*head = previous;
	}
	*head = null_help;
	return (*head);
}
