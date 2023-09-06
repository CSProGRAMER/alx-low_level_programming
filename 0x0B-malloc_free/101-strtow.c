#include <stdlib.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0; /* Flag to check if inside a word */

	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int num_words, i, j, k;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			str++;
		}
		else
		{
			j = 0;
			while (str[j] && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
				j++;
			words[i] = (char *)malloc(sizeof(char) * (j + 1));
			if (words[i] == NULL)
			{
				for (k = 0; k < i; k++)
					free(words[k]);
				free(words);
				return (NULL);
			}
	for (k = 0; k < j; k++)
		words[i][k] = str[k];
	words[i][j] = '\0';
	i++;
	str += j;
		}
	}
	words[i] = NULL; /* Set the*/
	return (words);
}
