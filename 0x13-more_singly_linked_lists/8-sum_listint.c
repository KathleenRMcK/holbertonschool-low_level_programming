#include "lists.h"


/**
 * sum_listint - returns the sum of all the data of a listint_t linked list
 * @head: pointer to head
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
