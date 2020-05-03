#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: List being printed
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
