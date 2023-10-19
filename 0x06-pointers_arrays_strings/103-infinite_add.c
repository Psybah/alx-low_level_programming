#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum, i, j;

	/* Find the lengths of the input strings */
	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	/* Initialize variables */
	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	size_r--;
	r[size_r] = '\0';

	/* Perform addition */
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;
		r[--size_r] = (sum % 10) + '0';
	}

	/* Check if the result can be stored in the buffer */
	if (size_r >= 0)
		return (r);
	else
		return (0);
}
