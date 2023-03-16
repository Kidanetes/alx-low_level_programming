#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/**
 * insert_dnodeint_at_index - insert node at the index
 * @h: head node of the DLL
 * @idx: index
 * @n: value of the new node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head, *tmp = NULL;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	head = *h;
	while (i <= idx && head != NULL)
	{
		if (idx == i)
		{
			new->n = n;
			new->next = head;
			head->prev = new;
			new->prev = tmp;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = head;
		head = head->next;
	}
	return (NULL);
}
