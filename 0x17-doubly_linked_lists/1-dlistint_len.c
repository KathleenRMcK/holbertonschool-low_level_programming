#include "lists.h"
/**
 * dlistint_len - Function that returns number of elements in linked list
 * @h: Elements being returned
 * Return: Output
 */
size_t dlistint_len(const dlistint_t *h)
{
	int finder = 0;

	while (h)
	{
		h = h->next;
		finder++;
	}
	return (finder);
}
