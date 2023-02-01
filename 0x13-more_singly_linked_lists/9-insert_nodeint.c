#include "lists.h"
/**
 * insert_nodeint_at_index - find the sum of all nodes
 * @head: input parameter
 * @idx: input parameter
 * @n: input parameter
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *tmp2;
	unsigned int i = 0;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	if (*head == NULL && idx == 0)
	{
		(*tmp).n = n;
		(*tmp).next = *head;
		*head = tmp;
		return (tmp);
	}
	if (idx == 0)
	{
		(*tmp).next = *head;
		(*tmp).n = n;
		*head = tmp;
		return (tmp);
	}
	tmp2  = *head;
	while (tmp2 != NULL)
	{
		if (i == idx - 1)
		{
			(*tmp).n = n;
			(*tmp).next = (*tmp2).next;
			tmp = (*tmp2).next;
			return (tmp);
		}
		i++;
		tmp2 = (*tmp2).next;
	}
	return (NULL);	
}
