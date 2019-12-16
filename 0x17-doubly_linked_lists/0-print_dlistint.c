#include "lists.h"
/**
 * print_dlistint - Function that prints all elements of list
 * @h: Elememts being printed
 * Return: Output
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t list_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		list_count++;
	}
	return (list_count);
}
