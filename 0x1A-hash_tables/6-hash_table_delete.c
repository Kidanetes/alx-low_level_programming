#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete a has table
 * @ht:  hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr, *tmp;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				tmp = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
