#include "lists.h"


/**
 * free_listint - frees listint_t list
 * @head: pointer for head
 * Return: 0
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
