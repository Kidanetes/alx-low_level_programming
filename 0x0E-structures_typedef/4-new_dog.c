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
	char *name1, *owner1;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	name1 = copy(name);
	if (name1 == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	owner1 = copy(owner);
	if (owner1 == NULL)
	{
		free(new_dog);
		free(name1);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
/**
 * copy - copy one string into another
 * @name: string to be copied
 *
 * Return: pointer to another string
 */
char *copy(char *name)
{
	int i = 0;
	char *name1;

	while (name[i] != '\0')
		i++;
	name1 = malloc(sizeof(char) * (i + 1));
	if (name1 == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
	{
		name1[i] = name[i];
		i++;
	}
	name1[i] = name[i];
	return (name1);
}
