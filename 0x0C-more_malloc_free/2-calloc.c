#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array and set it to zero
 * @nmemb: number of elements to allocate memory for
 * @size: size of each element
 *
 * Return: pointer to the allocated memory, or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return NULL;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return NULL;

	/* set memory to zero */
	memset(ptr, 0, nmemb * size);

	return ptr;
}
