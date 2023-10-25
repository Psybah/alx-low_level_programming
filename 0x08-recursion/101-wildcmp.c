#include "main.h"

/**
 * wildcmp - Compares two strings with wildcards.
 * @s1: The first string.
 * @s2: The second string with wildcards.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* If we reach the end of both strings, they are identical */
	if (*s1 == '\0')
	{
		/* Check if the remaining characters in s2 are '*' */
		while (*s2 == '*')
			s2++;

		/* If s2 is now empty, strings are identical; otherwise, they're not */
		return (*s2 == '\0');
	}

	/* If the current characters match or s2 has a wildcard */
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}

	/* If the current characters match or s2 has a regular character */
	if (*s1 == *s2)
	{
		/* Move to the next character in both strings */
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* If the characters don't match and there is no wildcard */
	return (0);
}
