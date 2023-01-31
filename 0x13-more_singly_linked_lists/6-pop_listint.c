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

	if (*head == NULL)
	{
		return (tmp);
	}
	tmp = (**head).n;
	*head = (**head).next;
	return (tmp);
}
