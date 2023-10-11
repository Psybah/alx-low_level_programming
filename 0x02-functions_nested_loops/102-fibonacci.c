#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, next;

	for (count = 1; count <= 50; count++)
	{
		printf("%lu", fib1);

		if (count < 50)
			printf(", ");

		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}

	printf("\n");

	return (0);
}
