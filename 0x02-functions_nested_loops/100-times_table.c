#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: Number to print the times table for
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, column, result;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			result = row * column;
			if (column == 0)
				printf("%d", result);
			else
				printf(", %3d", result);
		}
		printf("\n");
	}
}
