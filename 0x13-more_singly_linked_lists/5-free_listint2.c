#include "lists.h"


/**
 * free_listint - frees listint_t list
 * @head: pointer for head
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	if (head == NULL)
		return;
	
	while (*head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
