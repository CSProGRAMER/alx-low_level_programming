#include "_putchar.h"

/**
 * main - Entry point
 * Description: a C program tha using putchar function
 * Return: Always 0 (Success)
 */
void print_alphabet(void)/* function print aplhabet */
{
	char letter = 'a';	
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
