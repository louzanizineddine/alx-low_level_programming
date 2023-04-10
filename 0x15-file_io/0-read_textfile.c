#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: The number of letters
 * Return: number of butes read from the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file_descriptor, num_bytes_read, num_bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * num_letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	num_bytes_read = read(file_descriptor, buffer, num_letters);
	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);

	if (file_descriptor == -1 || num_bytes_read == -1 ||
	num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		free(buffer);
		return (0);
	}

	close(file_descriptor);

	return (num_bytes_written);
}
