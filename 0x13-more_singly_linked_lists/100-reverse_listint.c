#include "lists.h"
/**
* reverse_listint - reverse the list
* @head: head node
*
* Return: address of the new head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2 = NULL;

	if (*head == NULL)
		return (NULL);
	tmp1 = *head;
	if ((**head).next == NULL)
		return (*head);
	while (*head != NULL)
	{
		tmp1 = (*head)->next;
		(*head)->next = tmp2;
		tmp2 = *head;
		*head = tmp1;
	}
	*head = tmp2;
	return (*head);
}
