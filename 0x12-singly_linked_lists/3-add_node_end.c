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
		(*new).len = j;
		return (new);
	}
	new = *head;
	while ((*new).next != NULL)
	{
		new = (*new).next;
	}
	new = (*new).next;
	(*new).str = strdup(str);
	(*new).len = j;
	(*new).next = NULL;
	return (new);
}



