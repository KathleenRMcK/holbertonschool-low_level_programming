#include "lists.h"
/**
 * delete_dnodeint_at_index - Function to delete node at index of list
 * @head: Beginning of list
 * @index: Location of node being deleted
 * Return: Output
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *temp = *head;
        unsigned int count = 0;

        if (!head)
                return (-1);

        while (count < index)
        {
                temp = temp->next;
                if (temp == NULL)
                        return (-1);
        }
        if (index == 0)
        {
                temp = temp->next;
                temp->next->prev = NULL;
        }
        else
        {
                if (temp->prev)
                {
                        temp->prev->next = temp->next;
                }
                if (temp->next)
                {
                        temp->next->prev = temp->prev;
                }
        }
        free(temp);
        return (1);
}
