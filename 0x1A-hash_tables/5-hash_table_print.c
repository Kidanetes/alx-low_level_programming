#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - print a has table
 * @ht:  hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	int status = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				if (status == 1)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				status = 1;
				ptr = ptr->next;
			}
		}
		printf("}\n");
	}
}
