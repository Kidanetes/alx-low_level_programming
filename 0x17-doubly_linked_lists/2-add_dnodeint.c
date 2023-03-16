#include "lists.h"
/**
 * add_dnodeint - adds new node at the beginning
 * @head: head of the DLL
 * @n: value of the new node
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	(**head).prev = new;
	*head = new;
	return (*head);
}
