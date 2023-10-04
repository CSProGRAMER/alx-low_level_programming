#include "main.h"

int main(int argc, char *argv[])
{
	ssize_t letters_read;
	if (argc != 2)
	{
		printf("Usage: %s <filename>\n", argv[0]);
		return (1);
	}

	letters_read = read_textfile(argv[1], 1024); /* Adjust the number of letters as needed. */

	if (letters_read == 0)
	{
		fprintf(stderr, "Error: Unable to read the file or write to stdout.\n");
		return (1);
	}

	printf("\nNumber of letters read and printed: %ld\n", letters_read);

	return (0);
}
