#include "lists.h"
/**
 * print_listint - print the list
 * @h: input parameter
 *
 * Return: numeber of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (head != NULL)
	{
		printf("%d\n", (*head).n);
		count++;
		head = (*head).next;
	}
	return (count);
}



