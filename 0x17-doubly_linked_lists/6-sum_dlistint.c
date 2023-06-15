#include "lists.h"
/**
 * sum_dlistint - sum  the values of every node
 * @head: head node
 *
 * Return: sum of the values of the node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
