#include "lists.h"
/**
 * free_listint - frees a list_t list
 * @head: head node
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = (*head).next;
		free((*head).n);
		free(head);
		head = tmp;
	}
}
