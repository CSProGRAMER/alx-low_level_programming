#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to check.
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Numbers less than or equal to 1 are not */
	return (check_prime(n, 2)); /* Start checking for prime from 2 */
}

/**
 * check_prime - Helper function to check if n is prime using recursion.
 * @n: The integer to check.
 * @divisor: The current divisor being tested.
 * Return: 1 if n is prime, 0 otherwise.
 */
int check_prime(int n, int divisor)
{
	if (divisor >= n)
		return (1); /* No divisors found other than 1 and itself */
	if (n % divisor == 0)
		return (0); /* n is divisible by divisor, so it's not */
	return (check_prime(n, divisor + 1)); /* Try the next divisor */
}
