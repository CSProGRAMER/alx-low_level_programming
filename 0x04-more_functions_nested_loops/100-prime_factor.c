#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Find the largest prime factor of a number.
 * @n: The number for which to find the largest prime factor.
 * Return: The largest prime factor.
 */
long largest_prime_factor(long n)
{
	long factor = 2;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}

	return factor;
}

int main(void)
{
	long number = 612852475143;
	long result = largest_prime_factor(number);

	printf("%ld\n", result);

	return (0);
}
