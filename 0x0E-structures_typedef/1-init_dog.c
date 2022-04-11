#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initalizez a var of struct dog
 * @d: pointer to struct dog
 * @name: name of dog to initiliaze
 * @age: age of dog to initialize
 * @owner: owner of dog to initialze
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog))
	
	d->name = name;
	d->age = age;
	d->owner = owner;
}
