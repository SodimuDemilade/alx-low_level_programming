#include <stdio.h>
#include "dog.h"
#include "main.h"

/**
 * print_dog - check the code.
 *
 * @d: check the parameters.
 *
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("Nothing");
	if (d -> name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s\n", d -> name);
	printf("Age: %f\n", d -> age);
	if (d -> owner == NULL)
		printf("Name: (nil)");
	else
		printf("Owner: %s\n", d -> owner);
}