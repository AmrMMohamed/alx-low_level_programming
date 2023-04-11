#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate the length of the new string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* account for the space character */
	}
	len++; /* account for the null terminator */

	/* allocate memory for the new string */
	str = malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* copy the arguments into the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n'; /* add a newline character */
		k++;
	}
	str[k] = '\0'; /* add the null terminator */
	return (str);
}
