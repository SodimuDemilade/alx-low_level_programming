#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - check the code.
 *
 * @d: check the parameters.
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(-1);
	if (d->name == NULL)
		printf("Name: (nil)");
	if (d->age == 0)
		printf("Age: (nil)");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);
}
