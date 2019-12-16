#include "lists.h"
/**
 * sum_dlistint - Function that returns sum of all data in list
 * @head: Beginning of list
 * Return: Output
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
