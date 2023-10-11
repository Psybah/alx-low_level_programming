#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long fib1 = 1, fib2 = 2, next;
    int count;

    printf("%lu", fib1);

    for (count = 2; count <= 98; count++)
    {
        printf(", %lu", fib2);

        next = fib1 + fib2;
        fib1 = fib2;
        fib2 = next;
    }

    printf("\n");

    return (0);
}
