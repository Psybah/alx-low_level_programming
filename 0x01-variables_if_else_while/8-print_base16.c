#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hexDigit = '0';

	while (hexDigit <= '9' || (hexDigit >= 'a' && hexDigit <= 'f'))
	{
		putchar(hexDigit);
		hexDigit++;
	}

	putchar('\n');

	return (0);
}
