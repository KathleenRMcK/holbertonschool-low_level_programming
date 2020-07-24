#include "lists.h"


/**
 * listint_len - returns number of elements in linked listint_t list
 * @h: helper
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int help = 0;
	const listint_t *new = h;

	for (; new; new = new->next)
		help++;
		return (help);
}
