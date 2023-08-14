#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Entry point
 * @d: param
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %lf\n", d->age);
	printf("Name: %s", d->owner);
}

