#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i < 9)
		{
			_putchar(i + '0');
		}
		else
		{
			_putchar(i + '0');
			_putchar('\n');
		}
	}
}
