#include "lists.h"
/**
 * sum_dlistint - find sum of the nodes of DLL
 * @head: head node of the DLL
 *
 * Return: sum of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
