#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - create a hash table
 * @size: size of the hash table
 *
 * Return: hash table or null
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ptr;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(shash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(size * sizeof(shash_table_t *));
	if (ptr->array == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->shead = NULL;
	ptr->stail = NULL;
	while (i < size)
	{
		ptr->array[i] = NULL;
		i++;
	}
	return (ptr);
}
/**
 * shash_table_set - add to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: index
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *ptr, *tmp;
	unsigned long int index;

	if (ht == NULL || strlen(key) == 0)
		return (0);

	ptr = malloc(sizeof(shash_node_t));
	if (ptr == NULL)
		return (0);
	ptr->key = strdup(key);
	ptr->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = ptr;
		ptr->next = NULL;
		add_to_sorted(ht, ptr);

	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, ptr->key) == 0)
			{
				free(tmp->value);
				free(ptr->key);
				tmp->value = ptr->value;
				free(ptr);
				return (1);
			}
			tmp = tmp->next;
		}
		ptr->next = ht->array[index];
		ht->array[index] = ptr;
		add_to_sorted(ht, ptr);
	}
	return (1);
}
/**
 * add_to_sorted - add a key:value pair to sorted linked
 * list
 * @ht: hash tables
 * @ptr: ptr to new added node
 * Return: nothing
 */
void add_to_sorted(shash_table_t *ht, shash_node_t *ptr)
{
	shash_node_t *tmp;

	if (ht->shead == NULL)
	{
		ht->shead = ptr;
		ht->stail = ptr;
		ptr->snext = NULL;
		ptr->sprev = NULL;
		return;
	}
	if (strcmp(ht->shead->key, ptr->key) > 0)
	{
		ptr->snext = ht->shead;
		ht->shead->sprev = ptr;
		ptr->sprev = NULL;
		ht->shead = ptr;
	}
	else if (strcmp(ht->stail->key, ptr->key) < 0)
	{
		ptr->sprev = ht->stail;
		ht->stail->snext = ptr;
		ptr->snext = NULL;
		ht->stail = ptr;
	}
	else
	{
		tmp  = ht->shead->snext;
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, ptr->key) > 0)
			{
				ptr->snext = tmp;
				ptr->sprev = tmp->sprev;
				tmp->sprev->snext = ptr;
				tmp->sprev = ptr;
				break;
			}
			tmp = tmp->snext;
		}
	}
}
/**
 * shash_table_get - returns a value paired with a key
 * @ht: hash table
 * @key: key
 * Return: value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *ptr;

	if (ht == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[index];
	while (ptr != NULL)
	{
		if (strcmp(key, ptr->key) == 0)
			return (ptr->value);
		ptr = ptr->next;
	}
	return (NULL);
}

/**
 * shash_table_print - print a hash table
 * @ht:  hash table
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *ptr;
	int status = 0;

	if (ht != NULL)
	{
		printf("{");
		ptr = ht->shead;
		while (ptr != NULL)
		{
			if (status == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			status = 1;
			ptr = ptr->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - print a hash table in reverse
 * @ht:  hash table
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *ptr;
	int status = 0;

	if (ht != NULL)
	{
		printf("{");
		ptr = ht->stail;
		while (ptr != NULL)
		{
			if (status == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			status = 1;
			ptr = ptr->sprev;
		}
		printf("}\n");
	}
}
/**
 * shash_table_delete - delete a has table
 * @ht:  hash table
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *ptr, *tmp;

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
