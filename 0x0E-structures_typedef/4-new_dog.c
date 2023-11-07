#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int a, b, c;
	dog_t *nwd;

	if (name == NULL || owner == NULL)
		return (NULL);
	nwd = malloc(sizeof(dog_t));
	if (nwd == NULL)
	{
		return (NULL);
	}
	for (a = 0; name[a]; a++)
		;
	a++;
	nwd->name = malloc(sizeof(char) * a);
	if (nwd->name == NULL)
	{
		free(nwd);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		nwd->name[c] = name[c];
	nwd->age = age;
	for (b = 0; owner[0]; b++)
		;
	b++;
	nwd->owner = malloc(sizeof(char) * b);
	if (nwd->owner == NULL)
	{
		free(nwd->owner);
		free(nwd);
		return (NULL);
	}
	for (c = 0; c < b; c++)
		nwd->owner[c] = owner[c];
	return (nwd);
}
