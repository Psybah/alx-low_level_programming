#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to search.
 * @accept: Pointer to the set of bytes to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp_accept = accept;

		while (*temp_accept)
		{
			if (*s == *temp_accept)
				return (s);
			temp_accept++;
		}
		s++;
	}

	return ('\0');
}
