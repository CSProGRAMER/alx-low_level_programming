#include <stdlib.h>
#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concatenated;
	int total_length = 0;
	int i, j;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++; /* Add space for the newline character */
	}

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc(sizeof(char) * (total_length + 1));

	if (concatenated == NULL)
		return (NULL);

	/* Concatenate the strings with newline characters */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			concatenated[k] = av[i][j];
		concatenated[k] = '\n'; /* Add newline character */
		k++;
	}

	concatenated[k] = '\0'; /* Null-terminate the string */
	return (concatenated);
}
