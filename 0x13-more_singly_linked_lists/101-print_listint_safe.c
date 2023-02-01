#include "lists.h"
/**
 * print_listint_safe - prints a list
 * @head: input parameter
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int num = 0, diff;

	if (*head == NULL)
		exit(98);
	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}
