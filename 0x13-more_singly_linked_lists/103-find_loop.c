#include "lists.h"
/**
 * find_listint_loop - finds the loop in a list
 * @head: input parameter
 * Return: The address of the head, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one = head, *two = head;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			one = head;
			while (one != two)
			{
				one = one->next;
				two = two->next;
			}
			return (two);
		}
	}
	return (NULL);
}
