#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: a C program that prints using puts function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
