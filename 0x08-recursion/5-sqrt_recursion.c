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
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (_sqrt_helper(n, guess + 1)); 
}
