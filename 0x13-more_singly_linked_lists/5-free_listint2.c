#include "lists.h"
/**
 * free_listint2 - frees a list_t list
 * @head: head node
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = (*head).next;
		(**head) = NULL;
		head = tmp;
	}
}
