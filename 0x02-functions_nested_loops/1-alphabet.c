#include "_putchar.h"
/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 *
 * Description: This function prints the lowercase alphabet starting from 'a'
 * and ending at 'z', followed by a new line character.
 */
void print_alphabet(void)
{
	char letter = 'a';/* Initialize the starting letter as 'a' */

	while (letter <= 'z')
	{
		_putchar(letter); /* Call _putchar to print the current letter */
		letter++;
	}
	_putchar('\n');/* Print a new line character after the alphabet */
}
