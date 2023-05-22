#include <stdio.h>
#include "dog.h"
#include "main.h"
#include <stdlib.h>

/**
 * init_dog - check the code.
 *
 * @d: check the parameters.
 *
 * @name: check the parameters.
 *
 * @age: check the parameters.
 *
 * @owner: check the parameters.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
}
