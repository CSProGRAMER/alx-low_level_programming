#include <unistd.h>

/**
 * main - Entry point
 * Description: a C program that prints using puts function
 * Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return write(1, &c, 1);
}

void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
