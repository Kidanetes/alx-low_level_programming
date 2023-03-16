#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of the DLL
 * @head: head node of the DLL
 * @index: index of the node
 * Return: address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = NULL;
	unsigned int i = 0;

	while (i <= index && head != NULL)
	{
		if (index == i)
			node = head;
		i++;
		head = head->next;
	}
	return (node);
}
