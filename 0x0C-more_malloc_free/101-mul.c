#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_error - prints Error and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - checks if a string contains only digits
 * @s: the string to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * multiply - multiplies two numbers and updates the result
 * @mul: the array to store the result
 * @len1: length of the first number
 * @len2: length of the second number
 * @num1: the first number as a string
 * @num2: the second number as a string
 */
void multiply(int *mul, int len1, int len2, char *num1, char *num2)
{
	int carry, res;
	int i, j;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			res = (num1[i] - '0') * (num2[j] - '0') + mul[i + j + 1] + carry;
			mul[i + j + 1] = res % 10;
			carry = res / 10;
		}
		mul[i + j + 1] += carry;
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments
 * @argv: an array containing the arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int len1, len2, len_mul;
	int *mul;
	int i;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	len1 = 0;
	while (argv[1][len1])
		len1++;

	len2 = 0;
	while (argv[2][len2])
		len2++;

	len_mul = len1 + len2;
	mul = malloc(sizeof(int) * len_mul);
	if (mul == NULL)
		return (1);

	for (i = 0; i < len_mul; i++)
		mul[i] = 0;

	multiply(mul, len1, len2, argv[1], argv[2]);

	for (i = 0; i < len_mul; i++)
		_putchar(mul[i] + '0');
	_putchar('\n');

	free(mul);

	return (0);
}
