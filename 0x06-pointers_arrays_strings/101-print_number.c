#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			_putchar('2');
			n = 147483648;
		}
		else
		{
			n = -n;
		}
	}

	if (n / 10 != 0)
}
