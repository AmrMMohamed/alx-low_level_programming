#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter.
 * @str: the string to copy.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *	On failure, returns NULL.
 */
char *_strdup(char *str)
{
	char *new_str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	/* Determine length of the string */
	while (str[len] != '\0')
		len++;

	/* Allocate memory for new string */
	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	/* Copy string to new memory location */
	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}
