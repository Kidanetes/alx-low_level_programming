#include "lists.h"
/**
 * add_node - add new node at start
 * @head: new head
 * @str: string
 * Return: address to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int j = 0;

	while (str[j] != '\0')
		j++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	(*new).len = j;
	(*new).next = *head;
	*head = new;
	return (*head);
}
