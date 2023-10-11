#include <stdio.h>

int main(void)
{
	int fib1 = 1, fib2 = 2, nextTerm;
	int i;

	printf("%d, %d", fib1, fib2);

	for (i = 3; i <= 50; ++i)
	{
		nextTerm = fib1 + fib2;
		printf(", %d", nextTerm);

		fib1 = fib2;
		fib2 = nextTerm;
	}

	printf("\n");

	return 0;
}
