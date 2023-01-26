#include "lists.h"
/**
 * add_node_end - add node at the end
 * @head: head node
 * @str: string
 * Return: address to the  new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int j = 0;
	list_t *new;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
		j++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		(*new).next = NULL;
		(*new).str = strdup(str);
		if ((*new).str == NULL)
		{
			free(new);
			return (NULL);
		}
		(*new).len = j;
		return (new);
	}
	while ( (**head).next != NULL)
	{
		*head = (**head).next;
	}
	new = (**head).next;
	(*new).str = strdup(str);
	if ((*new).str == NULL)
		{
			free(new);
			return (NULL);
		}
	(*new).len = j;
	(*new).next = NULL;
	return (new);
}



