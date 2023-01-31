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

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	(*tmp).n = n;
	(*tmp).next = *head;
	*head = tmp;
	return (*head);
}
