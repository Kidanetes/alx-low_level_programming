#include "lists.h"
/**
 * add_nodeint - add new node at the head
 * @head: node
 * @n: input parameter
 *
 * Return: address to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (*head == NULL)
	{
		(*tmp).next = NULL;
		(*tmp).n = n;
		*head = tmp;
		return (*head);
	}
	(*tmp).n = n;
	(*tmp).next = *head;
	*head = tmp;
	return (*tmp);
}

