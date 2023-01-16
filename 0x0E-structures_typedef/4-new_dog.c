#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog structure
 * @name: input parameter1
 * @age: input parameter2
 * @owner: input parameter3
 * Return: pointer to new struc
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpyname, *cpyowner;
	int i = 0, j = 0,  k;

	if (name == NULL || owner == NULL || new_dog == NULL)
		return (NULL);
	while (name[i])
		i++;
	while (owner[j])
		j++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	cpyname = malloc(i + 1);
	if (cpyname == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (k = 0; name[k]; k++)
		cpyname[k] = name[k];
	cpyname[k] = '\0';
	cpyowner = malloc(j + 1);
	if (cpyowner == NULL)
	{
		free((*new_dog).name);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; owner[k]; k++)
		cpyowner[k] = owner[k];
	cpyowner[k] = '\0';
	(*new_dog).name = cpyname;
	(*new_dog).age = age;
	(*new_dog).owner = cpyowner;
	return (new_dog);
}

