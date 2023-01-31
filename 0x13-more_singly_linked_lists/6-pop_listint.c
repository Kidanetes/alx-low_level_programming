#include "lists.h"
/**
 * pop_listint - return number of nodes
 * @head: input parameter
 *
 * Return: number of node after deletion
 */
int pop_listint(listint_t **head)
{
	int tmp = 0;
	listint_t *tmp2;

	if (*head == NULL)
	{
		return (tmp);
	}
	tmp2 = *head;
	tmp = (**head).n;
	*head = (**head).next;
	free(tmp2);
	return (tmp);
}
