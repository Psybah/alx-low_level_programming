#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long n)
{
	long i, max;

	while (n % 2 == 0)
	{
		n /= 2;
		max = 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			max = i;
		}
	}

	if (n > 2)
		max = n;

	return max;
}

/**
 * main - Entry point for the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long result = largest_prime_factor(num);

	printf("%ld\n", result);

	return (0);
}
