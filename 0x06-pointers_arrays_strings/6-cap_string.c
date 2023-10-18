#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize = 1; /* Flag to indicate whether to capitalize */

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n' || *str == ',' ||
		    *str == ';' || *str == '.' || *str == '!' || *str == '?' ||
		    *str == '"' || *str == '(' || *str == ')' || *str == '{' ||
		    *str == '}')
		{
			capitalize = 1; /* Set flag to capitalize next word */
		}
		else if (*str >= 'a' && *str <= 'z' && capitalize)
		{
			*str = *str - 'a' + 'A'; /* Capitalize the letter */
			capitalize = 0; /* Reset flag after capitalization */
		}
		else
		{
			capitalize = 0; /* Reset flag for non-word separators */
		}

		str++;
	}

	return (ptr);
}
