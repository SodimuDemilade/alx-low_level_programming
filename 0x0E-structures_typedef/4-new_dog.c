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

	mydog = (dog_t*)malloc(sizeof(dog_t));
	if (mydog == NULL)
		return (NULL);
	mydog->name = strdup(name);
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->age = age;
	mydog->owner = strdup(owner);
	if (mydog->owner == NULL)
	{
		free(mydog->name);
		free(mydog);
		return (NULL);
	}
	return (mydog);
}
