#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head
 * @index: index helper
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int iterate = 0;

	for (; temp && iterate < index; iterate++)
	{
		temp = temp->next;
	}
	return (temp);
}
