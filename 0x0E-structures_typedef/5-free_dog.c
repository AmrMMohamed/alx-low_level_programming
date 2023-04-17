#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog_t structure
 * @d: pointer to dog_t structure
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
