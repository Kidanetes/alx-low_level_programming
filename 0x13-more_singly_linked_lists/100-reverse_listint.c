#include "lists.h"
/**
* reverse_listint - reverse the list
* @head: head node
*
* Return: address of the new head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp1, *tmp2;
	
	if (*head == NULL)
		return (NULL);
	tmp1 = *head;
	while ((*tmp1).next != NULL)
	{
		tmp2 = tmp1->next;
		tmp1->next = NULL;
		tmp1 = tmp2->next;
		*head = tmp2;
		tmp1 = tmp2;
	}
	return (*head);
}
		
		
  