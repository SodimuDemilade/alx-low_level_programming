#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - main
 *
 * @d: check
 *
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
