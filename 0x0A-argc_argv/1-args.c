#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	/* Print the number of arguments passed */
	printf("%d\n", argc - 1);

	/* Loop through each argument and print it */
	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
