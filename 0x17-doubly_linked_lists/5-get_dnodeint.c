#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of
 * the double linked list
 * @head: head node
 * @index: index of the node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;
	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index)
		return (tmp);
	return (NULL);
}
