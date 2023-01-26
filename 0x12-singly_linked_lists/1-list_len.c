#include "lists.h"
/**
 * list_len - returns the number of nodes
 * @h: head node
 *
 * Retrun: number of nodes
 */
size_t list_len(const list_t *h)
{
	int counter;

	while (h != NULL)
	{
		counter++;
		h = (*h).next;
	}
	return (counter);
}
