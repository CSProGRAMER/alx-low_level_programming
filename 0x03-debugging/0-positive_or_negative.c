#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - Determines if a number is positive, zero, or negative.
 * @n: The number to be checked.
 */
void positive_or_negative(int n)
{
	printf("The number %d is ", n);

	if (n > 0)
		printf("positive");
	else if (n == 0)
		printf("zero");
	else
		printf("negative");
	printf("\n");
}
