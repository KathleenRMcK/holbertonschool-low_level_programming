#include "lists.h"


/**
 * price_listint - prints all elements of listint_t
 * @h: helper
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int help = 0;
	const listint_t *new = h;

	for (; new; new = new->next)
	{
		printf("%d\n", new->n);
		help++;
	}
	return (help);
}
