#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
