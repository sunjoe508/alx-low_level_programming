#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - it initializes a variable of type struct dog
 * @d: is the pointer to struct dog to initialize
 * @name: is the name to initialize
 * @age: this is the age to initialize
 * @owner: the owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
