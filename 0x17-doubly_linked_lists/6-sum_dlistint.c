#include "lists.h"
/**
 * sum_dlistint - Returns sum of all data in linked list
 * @head: Beginning of list
 * Return: Sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
