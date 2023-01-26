#include "lists.h"
/**
 * add_node_end - add node at the end
 * @head: head node
 * @str: string
 * Return: address to the  new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	unsigned int j = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[j])
		j++;

	(*new).len = j;
	(*new).str = strdup(str);
	if (*head == NULL)
	{
		(*new).next = NULL;
		*head = new;
	}
	else
	{
		tmp = *head;
		while ((*tmp).next != NULL)
		{
			tmp = (*tmp).next;
		}
		(*tmp).next = new;
		(*new).next = NULL;
	}
	return (new);
}




