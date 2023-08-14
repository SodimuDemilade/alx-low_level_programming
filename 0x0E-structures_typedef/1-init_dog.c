#include <stdio.h>
#include "dog.h"

/**
 * init_dog - main
 *
 * @d: check
 *
 * @name: check
 *
 * @age: check
 *
 * @owner: check
 *
 * Return: check
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
