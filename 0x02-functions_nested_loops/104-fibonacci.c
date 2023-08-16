#include <gmp.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	mpz_t a, b, c;
	int count;

	mpz_init(a);
	mpz_init(b);
	mpz_init(c);

	mpz_set_ui(a, 1);
	mpz_set_ui(b, 2);

	printf("%s, %s", mpz_get_str(NULL, 10, a), mpz_get_str(NULL, 10, b));

	for (count = 2; count < 98; count++)
	{
		mpz_add(c, a, b);
		gmp_printf(", %Zd", c);
		mpz_set(a, b);
		mpz_set(b, c);
	}

	printf("\n");

	mpz_clear(a);
	mpz_clear(b);
	mpz_clear(c);

	return (0);
}
