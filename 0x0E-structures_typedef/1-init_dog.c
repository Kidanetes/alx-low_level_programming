#include "dog.h"
/**
 * init_dog -  inrialize a dog structure
 * @d: structure
 * @name: input parameter1
 * @age: input parameter 2
 * @owner: input parameter 3
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
