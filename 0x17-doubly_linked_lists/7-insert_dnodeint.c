#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: head node
 * @idx: index of the new node
 * @n: value of the new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new = NULL;
	unsigned int i = 0;

	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	if (idx > i)
		return (NULL);
	if (idx == 0)
		new = add_dnodeint(h, n);
	else  if (idx == i)
		new = add_dnodeint_end(h, n);
	else
	{
		i = 1;
		tmp = (*h)->next;
		while  (i < idx)
		{
			i++;
			tmp = tmp->next;
		}
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = tmp;
		new->prev = tmp->prev;
		tmp->prev->next = new;
		tmp->prev = new;
	}
	return (new);
}
