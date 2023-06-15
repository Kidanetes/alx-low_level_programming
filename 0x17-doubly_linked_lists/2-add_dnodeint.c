#include "lists.h"
/**
 * add_dnodeint - add a node at the front
 * @head: head of the double linked list
 * @n: number
 * Return: new head node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
	{
		new->next = *head;
		(*head)->prev = new;
	}
	new->prev = NULL;
	new->n = n;
	*head = new;
	return (*head);
}
