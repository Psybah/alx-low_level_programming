#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: Natural square root of n. If n doesn't have a natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (calculate_sqrt(n, 1));
}

/**
 * calculate_sqrt - Helper function to recursively calculate the square root.
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The square root of n. If n does not have a natural square root, return -1.
 */
int calculate_sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}

	return calculate_sqrt(n, i + 1);
}
