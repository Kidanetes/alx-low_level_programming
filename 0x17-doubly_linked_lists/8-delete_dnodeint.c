#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head node
 * @index: index of the node to be deleted
 * Return: 1(success) otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tmp = *head;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if (index >= i)
		return (-1);
	tmp = (*head)->next;
	i = 1;
	while (i < index)
	{
		i++;
		tmp = tmp->next;
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
