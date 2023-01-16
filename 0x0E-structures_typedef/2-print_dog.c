#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the elemnt of the struct
 * @d: input parameter
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
			(*d).name = "(nil)";
		if ((*d).owner == NULL)
			(*d).owner = "(nil)";
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}

