#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create a hash table
 * @size: size of the hash table
 *
 * Return: hash table or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(size * sizeof(hash_table_t *));
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (i < size)
	{
		ptr->array[i] = NULL;
		i++;
	}
	return (ptr);
}
