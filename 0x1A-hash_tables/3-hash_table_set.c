#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - add to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: index
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr, *tmp;
	unsigned long int index;

	if (strlen(key) == 0)
		return (0);

	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
		return (0);
	ptr->key = strdup(key);
	ptr->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp == NULL)
	{
		tmp = ptr;
		ptr->next = NULL;
	}
	else
	{
		ptr->next = tmp->next;
		tmp  = ptr;
	}
	return (1);
}


