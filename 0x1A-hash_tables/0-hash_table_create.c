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
	unsigned long int i;
	hash_table_t *ptr;

	ptr = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(size * sizeof(hash_table_t *));
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr->array[i] = malloc(sizeof(hash_table_t *));
		if (ptr->array[i] == NULL)
		{
			while (--i)
				free(ptr->array[i]);
			free(ptr->array);
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
