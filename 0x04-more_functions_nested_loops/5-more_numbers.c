#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times
 *	and you can only use _putchar there times
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + j / 10);
			}
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
