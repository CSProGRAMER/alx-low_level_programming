#include "main.h"
#include <fcntl.h>

/**
 * create_file - Creates a file with the specified content and permissions.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t bytes_written;
	mode_t permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	/* Open or create the file for writing, with the specified permissions. */
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, permissions);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Write the text_content to the file. */
		bytes_written = write(file_descriptor, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
