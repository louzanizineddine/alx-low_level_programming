#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: number of chars appended.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, count, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	count = write(file, text_content, length);

	if (file == -1 || count == -1)
		return (-1);

	close(file);

	return (1);
}
