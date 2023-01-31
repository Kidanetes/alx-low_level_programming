#include "lists.h"
/**
 * add_nodeint_end - add new node at the head
 * @head: node
 * @n: input parameter
 *
 * Return: address to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *tmp2;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	if (*head == NULL)
	{
		(*tmp).n = n;
		(*tmp).next = *head;
		*head = tmp;
		return (*head);
	}
	tmp2 = *head;
	while (*tmp2 != NULL)
		tmp2 = (*tmp2).next;
	(*tmp).n = n;
	tmp = (*tmp2).next;
	(*tmp).next = NULL;
	return (*head);
}
