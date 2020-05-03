#include "lists.h"
/**
 * dlistint_len - Returns number of elements in linked list
 * @h: List being numbered
 * Return: Success
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
