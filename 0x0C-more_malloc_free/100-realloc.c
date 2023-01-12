#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: input parameter
 * @old_size: input parameter
 * @new_size: input parameter
 * Return: pointer to new memory allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	void *ptr2;

	if (new_size == 0)
	{
		if (ptr != NULL)
			free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		if (ptr != NULL)
			free (ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (ptr2);
	while (i < new_size && i < old_size)
	{
		*((char *)ptr2 + i) = *((char *)ptr + i);
		i++;
	}
	free(ptr);
	return (ptr2);
}
