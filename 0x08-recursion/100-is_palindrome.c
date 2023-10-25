#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = recursive_strlen(s);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Function to recursively check if a string is a palindrome
 * @s: The string to check.
 * @start: The starting index.
 * @end: The ending index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * recursive_strlen - Calculates the length of a string recursively.
 * @s: The string.
 *
 * Return: The length of the string.
 */
int recursive_strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + recursive_strlen(s + 1));
}
