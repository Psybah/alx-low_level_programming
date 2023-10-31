#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	}

	return (count);
}

/**
 * allocate_memory - Allocates memory for an array of strings.
 * @count: The number of strings to allocate space for.
 *
 * Return: A pointer to the allocated memory.
 */
char **allocate_memory(int count)
{
	return (malloc((count + 1) * sizeof(char *)));
}

/**
 * populate_array - Populates an array of strings with words from a string.
 * @str: The string to extract words from.
 * @words: The array to populate.
 */
void populate_array(char *str, char **words)
{
	int i, j, k, len;

	for (i = 0, k = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i + len] != ' ' && str[i + len] != '\0')
				len++;

			words[k] = malloc((len + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return;
			}

			for (j = 0; j < len; j++)
				words[k][j] = str[i + j];
			words[k][j] = '\0';
			k++;
			i += len - 1;
		}
	}

	words[k] = NULL;
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if failed.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int count = count_words(str);
	char **words = allocate_memory(count);

	if (words == NULL)
		return (NULL);

	populate_array(str, words);

	return (words);
}
