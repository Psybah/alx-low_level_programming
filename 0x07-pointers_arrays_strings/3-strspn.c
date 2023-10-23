#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s != '\0')
	{
		found = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				count++;
				found = 1;
				break;
			}
			accept++;
		}
		if (!found)
			break;
		s++;
		accept = original_accept; /* Reset accept pointer for the next iteration */
	}

	return (count);
}