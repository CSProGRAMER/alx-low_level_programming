#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 1, b = 2, c;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 98; count++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}

	printf("\n");
	return (0);
}
