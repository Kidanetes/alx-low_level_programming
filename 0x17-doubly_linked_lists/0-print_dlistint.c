#include "lists.h"
/**
 * print_dlistint - print values of the nodes of
 * double linked list(DLL)
 * @h: head of DLL
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
