#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char cH = 'A';

	/*print a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (cH <= 'Z')
	{
		putchar(cH);
		cH++;
	}
	putchar('\n');
	return (0);
}
