#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10x alphabets
 *
 * Return: Alwasy 0
*/

void print_alphabet_x10(void)
{
	char letter = 'a';

	for (int i = 1; i <= 10 ; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			_putchar(letter++);
		}
	_putchar('\n');
	letter = 'a';
	}
}
