#include "main.h"

/**
 * factorial - Calculates the factorial of a number.
 * @n: The number for which factorial is to be calculated.
 * Return: The factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1); /* Base case: factorial of 0 and 1 is 1 */
	else
		return (n * factorial(n - 1)); /* Recursive case: n! = n * (n-1)! */
}
