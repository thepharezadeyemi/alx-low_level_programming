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
	unsigned int a1, b1, c;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (a1 = 0; name[a1]; a1++)
		;
	a1++;
	dog->name = malloc(sizeof(char) * a1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (c = 0; c < a1; c++)
		dog->name[c] = name[c];
	dog->age = age;
	for (b1 = 0; owner[0]; b1++)
		;
	b1++;
	dog->owner = malloc(sizeof(char) * b1);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (c = 0; c < b1; c++)
		dog->owner[c] = owner[c];
	return (dog);
}
