#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv; /* THE LINE IS ADDED TO SILENCE Warning */
	printf("%d\n", argc - 1);
	return (0);
}
