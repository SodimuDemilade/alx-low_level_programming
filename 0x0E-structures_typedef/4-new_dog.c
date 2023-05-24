#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - check the code.
 *
 * @name: check the parameters.
 *
 * @age: check the parameters.
 *
 * @owner: check the parameters.
 *
 * Return: check the code.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *mydoggie;
	char *myname;
	char *myowner;

	myname = malloc(sizeof(char) * strlen(name));
	if (myname == NULL)
		return (NULL);
	myowner = malloc(sizeof(char) * strlen(owner));
	if (myowner == NULL)
		return (NULL);
	mydoggie->name = myname;
	mydoggie->age = age;
	mydoggie->owner = myowner;
	return (mydoggie);
}
