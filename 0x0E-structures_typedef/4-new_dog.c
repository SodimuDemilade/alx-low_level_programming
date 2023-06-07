#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - check.
 *
 * @str: check.
 *
 * Return: check.
 *
 */

int _strlen(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy - check.
 *
 * @dest: check.
 *
 * @src: check.
 *
 * Return: check.
 *
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0, a;

	while (src[count] != '\0')
	{
		count++;
	}
	for (a = 0 ; a < count ; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

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
	int count1 = _strlen(name);
	int count2 = _strlen(owner);
	dog_t *mydog = malloc(sizeof(dog_t));

	if (mydog == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->name = malloc(sizeof(char) * (count1 + 1));
	if (mydog->name == NULL)
	{
		free(mydog);
		return (NULL);
	}
	mydog->owner = malloc(sizeof(char) * (count2 + 1));
	if (mydog->owner == NULL)
	{
		free(mydog);
		free(mydog->name);
		return (NULL);
	}
	_strcpy(mydog->name, name);
	_strcpy(mydog->owner, owner);
	mydog->age = age;
	return (mydog);
}
