#include "main.h"

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			_putchar(',');
		printf("%d", a[i]);
	}

	_putchar('\n');
}
