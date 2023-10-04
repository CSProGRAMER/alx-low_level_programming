#include <stdio.h>
#include "main.h"

/**
 * main - Entry point for displaying ELF header information.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 1 if incorrect arguments, status code otherwise.
 */
int main(int argc, char *argv[])
{
	int status;
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 1;
    }

    status = elf_header(argv[1]);
    return status;
}
