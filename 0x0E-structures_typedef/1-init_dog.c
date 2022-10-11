#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initializes a struct dog
 * @d: struct name
 * @name: name var
 * @age: dogs age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

