#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: pointer to name string
 * @age: dog's age
 * @owner: pointer to owner string
 *
 * Return: pointer to the new dog, or NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/* Allocate memory for the new dog struct */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the new name string and copy the input string */
	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_name, name);

	/* Allocate memory for the new owner string and copy the input string */
	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	/* Initialize the new dog struct with the copied strings and the input age */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	/* Return a pointer to the new dog struct */
	return (new_dog);
}
