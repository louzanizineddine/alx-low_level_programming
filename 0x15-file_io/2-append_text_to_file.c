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
	int o, written_chars, length = 0;

	if (filengthame == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	written_chars = open(filengthame, O_WRONLY | O_APPEND);
	w = write(written_chars, text_content, length);

	if (written_chars == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
