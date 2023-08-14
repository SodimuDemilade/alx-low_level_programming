#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * new_dog - main
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

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);
	mydog->name = strdup(name);
	mydog->age = age;
	mydog->owner = strdup(owner);
	return (mydog);
}
