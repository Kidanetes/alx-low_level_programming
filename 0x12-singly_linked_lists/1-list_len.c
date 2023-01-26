#include "lists.h"
/**
 * list_len - returns the number of nodes
 * @h: head node
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = (*h).next;
	}
	return (counter);
}
