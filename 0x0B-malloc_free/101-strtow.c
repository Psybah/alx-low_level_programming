#include "main.h"
#include <stdio.h>

/**
 * count_words - counts the number of words in a string
 * @str: the input string
 *
 * Return: number of words
 */
static int count_words(char *str)
{
	int len = 0;
	int word_count = 0;

	while (str[len] != '\0')
	{
		while (str[len] == ' ')
			len++;
		if (str[len] != '\0')
			word_count++;
		while (str[len] != ' ' && str[len] != '\0')
			len++;
	}

	return (word_count);
}

/**
 * extract_word - extracts a word from a string
 * @str: the input string
 * @start: starting index of the word
 * @end: ending index of the word
 *
 * Return: pointer to the extracted word
 */
static char *extract_word(char *str, int start, int end)
{
	char *word;
	int j;

	word = malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);

	for (j = 0; start < end; start++, j++)
		word[j] = str[start];
	word[j] = '\0';

	return (word);
}

/**
 * strtow - splits a string into words.
 * @str: the input string
 *
 * Return: pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, k = 0;
	int start, end;
	int word_count, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = 0;
	word_count = count_words(str);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (str[len] == ' ')
			len++;
		start = len;
		while (str[len] != ' ' && str[len] != '\0')
			len++;
		end = len;
		words[k] = extract_word(str, start, end);
		if (words[k] == NULL)
		{
			for (i = 0; i < k; i++)
				free(words[i]);
			free(words);
			return (NULL);
		}
		k++;
	}

	words[k] = NULL;

	return (words);
}
