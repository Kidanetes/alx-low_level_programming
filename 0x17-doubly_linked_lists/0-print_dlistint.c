#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - print nodes of DLL
 * @h: head of DLL
 *
 * Return: size of DLL
 * DLL = Double linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		num++;
		h = (*h).next;
	}
	return (num);
}

