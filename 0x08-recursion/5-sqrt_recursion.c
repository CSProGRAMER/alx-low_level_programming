#include "main.h"

/**
 * _sqrt_recursion - Calculatessquare root of a number.
 * @n: The number to calculate the square root for.
 *
 * Return: The square root of n, natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1); /* Error: Square root is n*/
	else if (n < 2)
		return (n); /* Base cases: Square roo */
	else
		return (_sqrt_helper(n, 1)); /* Recursive helper function */
}

/**
 * _sqrt_helper - Helper function to calculate square root using recursion.
 */
int _sqrt_helper(int n, int guess)

	/*_sqrt_helper - Helper function*/
{
	if (guess * guess == n)
		return (guess);/* Found the exact square root */
	else if (guess * guess > n)
		return (-1);/* n doesn't have a natural square root */
	else
		return (_sqrt_helper(n, guess + 1));/* Try the next guess */
}
