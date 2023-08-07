#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int no_of_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (no_of_letters = 0; text_content[no_of_letters]; no_of_letters++)
		;

	rwr = write(fd, text_content, no_of_letters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
