#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}

	digit = 0;

	while (digit < 6)
	{
		putchar('a' + digit);
		digit++;
	}

	putchar('\n');

	return (0);
}
