#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: A pointer to the resulting string
 */
char *leet(char *str)
{
	char *leet_table = "aAeEoOtTlL";
	char *leet_replacement = "43071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_table[j] != '\0'; j++)
		{
			if (str[i] == leet_table[j])
			{
				str[i] = leet_replacement[j / 2];
				break;
			}
		}
	}

	return (str);
}
