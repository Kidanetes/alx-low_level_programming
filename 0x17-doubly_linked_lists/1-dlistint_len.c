#include "lists.h"
/**
 * dlistint_len - return number of nodes of
 * double linked list(DLL)
 * @h: head of DLL
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
