#include "lists.h"
/**
 * listint_len - return number of nodes
 * @h: input parameter
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h -> next;
	}
	return (count);
}
