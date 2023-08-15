#include "_putchar.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet 10 times.
 *
 * Description: This function prints the lowercase alphabet starting from 'a'
 * and ending at 'z', repeated 10 times. Each repetition is followed
 * by a new line character.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		letter = 'a'; /* Initialize the starting letter as 'a' */
		while (letter <= 'z')
		{
			_putchar(letter); /* Call _putchar to print the current letter */
			letter++;
		}
		_putchar('\n'); /* Print a new line character after each repetition */
	}
}
