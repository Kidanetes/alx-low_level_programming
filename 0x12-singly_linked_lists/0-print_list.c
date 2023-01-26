#include "lists.h"
/**
 * print_list - print the list
 * @h: node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *new;
	int count;
	int i;

	while (*h != NULL)
	{
		i = 0;
		if ((*h).str == NULL)
		{
			printf("[0] (nil)");
			count++;
		}
		else
		{
			printf("[%d] %s\n", (*h).len, (*h).str);
			count++;
		}
		h = (*h).next;
	}
	return (count);
}

