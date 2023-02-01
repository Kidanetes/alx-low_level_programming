#include "lists.h"
/**
 * delete_nodeint_at_index - add new node at the head
 * @head: node
 * @index: index of deleted node
 *
 * Return: 1 or 0 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		free(head);
		return (1);
	}
	tmp = *head;
	while (i < index - 1)
	{
		if ((*tmp).next == NULL)
			return (-1);
		tmp = (*tmp).next;
		i++;
	}
	tmp2 = (*tmp).next;
	(*tmp).next = (*tmp2).next;
	free(tmp2);
	return (1);
}
	
  
