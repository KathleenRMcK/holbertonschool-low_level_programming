#include "lists.h"
/**
 * free_dlistint - Function that frees a list
 * @head: Beginning of list
 * Return: Output
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
