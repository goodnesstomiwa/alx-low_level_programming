#include "main.h"

/**
 * read_textfile - It reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t my_rd, my_wrt;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	my_rd = read(fd, buf, letters);
	my_wrt = write(STDOUT_FILENO, buf, my_rd);

	close(fd);

	free(buf);

	return (my_wrt);
}
