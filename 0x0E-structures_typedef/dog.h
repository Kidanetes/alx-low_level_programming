#ifndef _HEADER_
#define _HEADER_
/**
 * struct dog - attributes
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 * Description: The attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t -  Typedef for new dog structure
 */
typedef struct dog dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
char *copy(char *name);
void free_dog(dog_t *d);
#endif
