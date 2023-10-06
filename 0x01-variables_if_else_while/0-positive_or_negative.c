#include <stdio.h>
#include <stdlilb.h>
#include <time.h>

/**
 * main - Entry poiint
 * Return: 0 (Sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("positive");
	if (n > 0)
	{
		printf("positive");
	}
	else if (n == 0)
	{
		printf("zero")
	}
	else
	{
		printf("negative");
	}
	printf("\n");
	return (0);
}
