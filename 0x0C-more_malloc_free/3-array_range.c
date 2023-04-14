#include "main.h"
#include <stdlib.h>

/**
 * array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		array[i] = min + i;

	return (array);
}
