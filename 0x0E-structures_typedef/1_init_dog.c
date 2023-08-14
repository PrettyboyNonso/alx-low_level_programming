#include "dog.h"
/**
 * init_dog- Entry point
 * @d: member
 * @name: member
 * @age: member
 * @owner: member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
