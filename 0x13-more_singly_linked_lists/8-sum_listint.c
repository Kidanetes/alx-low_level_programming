#include "lists.h"
/**
 * sum_listint - find the sum of all nodes
 * @head: input parameter
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	
	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum = sum + (*head).n;
		head = (*head).next;
	}
	return (sum);
}
  
