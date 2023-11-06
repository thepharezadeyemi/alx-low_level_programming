#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - struct that creates the dog info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: my first alx struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);


#endif
