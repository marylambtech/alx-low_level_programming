#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: terminated string.
 * Return: 1 on success.
 *         -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	w = write(fd, text_content, l);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
