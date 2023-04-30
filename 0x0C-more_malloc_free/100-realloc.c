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
	void *ptr2;
	unsigned int j = 0;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		free(ptr);
		return (NULL);
	}
	while (j < old_size && j < new_size)
	{
		*((char *)(ptr2) + j) = *((char *)(ptr) + j);
		j++;
	}
	free(ptr);
	ptr = ptr2;
	return (ptr);
}
