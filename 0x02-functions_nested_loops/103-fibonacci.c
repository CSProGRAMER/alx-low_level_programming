#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 1, b = 2, c;
	long int sum = 2; // We start with 2 since the second term (b) is even

	while (1)
	{
		c = a + b;
		if (c > 4000000)
			break;
		if (c % 2 == 0)
			sum += c;
		a = b;
		b = c;
	}

	printf("%ld\n", sum);

	return (0);
}
