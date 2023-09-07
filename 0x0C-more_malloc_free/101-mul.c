#include "main.h"
#include <stdlib.h>

/**
 * is_digit - Checks if a string consists of digits.
 * @s: The string to check.
 * Return: 1 if the string consists of digits, 0 otherwise.
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * multiply - Multiplies two positive numbers.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len = len1 + len2;
	int *result, i, j;

	result = malloc(sizeof(int) * len);

	if (result == NULL)
	{
		_print("Error");
		exit(98);
	}

	for (i = 0; i < len; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];
			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	for (i = 0; i < len; i++)
		result[i] += '0';

	for (i = 0; i < len && result[i] == '0'; i++)
	{
		if (i == len - 1)
		{
			_putchar('0');
			_putchar('\n');
			free(result);
			return;
		}
	}

	for (; i < len; i++)
		_putchar(result[i]);

	_putchar('\n');

	free(result);
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to measure.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (len);
}

/**
 * _print - Prints a string.
 * @str: The string to print.
 */
void _print(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		_print("Error");
		_putchar('\n');
		exit(98);
	}

	multiply(argv[1], argv[2]);

	return (0);
}
