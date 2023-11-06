#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - variable of new dog stuct to initialize
 * @d: pointer to the struct of the dog
 * @name: to name of dog
 * @age: age of the dog
 * @owner: to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
