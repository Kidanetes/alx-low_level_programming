#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head of the DLL
 * @index: index of the node to be deleted
 * Return: 1(success) or -1(failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp1 = *head, *tmp2;
	dlistint_t *tmp3;
	unsigned int i = 0;

	if (*head != NULL && index == 0)
	{
		tmp1 = *head;
		*head = (**head).next;
		free(tmp1);
		return (1);

	}
	while (i <= index && tmp1 != NULL)
	{
		tmp2 = tmp1->prev;
		tmp3 = tmp1->next;
		if (i == index)
		{
			if (tmp2 == NULL && tmp3 != NULL)
				tmp3->prev = tmp2;
			else if (tmp2 != NULL && tmp3 == NULL)
				tmp2->next = tmp3;
			else if (tmp2 != NULL && tmp3 != NULL)
			{
				tmp2->next = tmp3;
				tmp3->prev = tmp2;
			}
			else
			{
			}
			free(tmp1);
			return (1);
		}
		tmp1 = tmp1->next;
		i++;
	}
	return (-1);
}

