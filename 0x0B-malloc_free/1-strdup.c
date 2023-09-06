#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a new copy of a string.
 * @str: The string to duplicate.
 * Return: Pointer to the duplicated string, or NULL if str is NULL or
 * if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}
