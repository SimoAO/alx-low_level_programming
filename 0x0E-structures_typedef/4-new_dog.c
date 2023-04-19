#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog;

	mydog = malloc(sizeof(dog_t));
	if (mydog == NULL || !(name) || !(owner))
	{
	free(mydog);
	return (NULL);
	}
	mydog->name = malloc(strlen(name) + 1);
	mydog->owner = malloc(strlen(owner) + 1);
	if (!(mydog->name) || !(mydog->owner))
	{
	free(mydog->name);
	free(mydog);
	return (NULL);
	}
	strcpy(mydog->name, name);
	strcpy(mydog->owner, owner);
	mydog->age = age;
	return (mydog);
}
