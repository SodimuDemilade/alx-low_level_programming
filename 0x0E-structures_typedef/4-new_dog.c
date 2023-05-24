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
	dog_t *mydog = malloc(sizeof(*mydog));
	char *myowner;
	char *myname;

	if (mydog == NULL)
	{
		free(mydog);
		return (NULL);
	}
	myname = malloc(sizeof(name));
	myname = name;
	myowner = malloc(sizeof(owner));
	myowner = owner;
	mydog->name = myname;
	mydog->age = age;
	mydog->owner = myowner;
	return (mydog);
	free(mydog);
}