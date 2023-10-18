#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;
	char leetMap[] = {'A', 'E', 'O', 'T', 'L'};
	char leetCode[] = {'4', '3', '0', '7', '1'};
	int i, j;

	while (*str)
	{
		i = 0;
		j = 0;

		while (leetMap[j])
		{
			if (*str == leetMap[j] || *str == leetMap[j] + 'a' - 'A')
			{
				*str = leetCode[j];
				break;
			}
			j++;
		}

		str++;
	}

	return (ptr);
}
