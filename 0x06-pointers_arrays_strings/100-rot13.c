#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13Alphabet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	while (*str)
	{
		i = 0;
		j = 0;

		while (alphabet[j])
		{
			if (*str == alphabet[j])
			{
				*str = rot13Alphabet[j];
				break;
			}
			j++;
		}

		str++;
	}

	return (ptr);
}
