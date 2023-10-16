#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that generates random valid
 *        passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	printf("\n");

	printf("Hello ----- world\n");
	printf("+++++ +-+ 2242454\n");
	printf("2147483647");
	printf(" + + - -98 Battery Street; San Francisco, CA 94111 - USA\n");
	printf("");
	printf("-2147483648\n");

	return (0);
}
