#include "lists.h"
/**
 * add_dnodeint_end - add new node at the end
 * @head: head node of the DLL
 * @n: value of the new node
 * Return: address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	new->n = n;
	tmp->next = new;
	new->prev = tmp;
	new->next = NULL;
	return (new);
}

