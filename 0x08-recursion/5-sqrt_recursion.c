#include "main.h"

/**
 * _sqrt - helper function to calculate the natural square root of a number
 * @n: the number to calculate the square root of
 * @i: the current integer to test for being the square root
 *
 * Return: the square root of n if it exists, -1 otherwise
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root of n if it exists, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
