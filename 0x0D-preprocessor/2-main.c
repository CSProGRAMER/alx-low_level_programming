#include <stdio.h>

/**
 * main - Entry point of the program
 * Description: This function prints the name of the file it was compiled from.
 * It uses the __FILE__ macro provided by the preprocessor.
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Print the name of the current source file followed by a newline */
	printf("%s\n", __FILE__);

	return (0);
}
