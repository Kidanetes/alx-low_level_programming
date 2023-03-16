#include "lists.h"
/**
 * dlistint_len - return number of nodes
 * @h: head node of DLL
 *
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
