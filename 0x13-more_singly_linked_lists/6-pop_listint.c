#include "lists.h"


/**
 * pop_listint - delete head node of listint_t linked list and returns head's data
 * @head: pointer to head
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node_help;
	unsigned int return_help;

	if (*head == NULL)
		return (0);
	node_help = *head;
	return_help = node_help->n;
	*head = node_help->next;
	free(node_help);
	return (return_help);
}
