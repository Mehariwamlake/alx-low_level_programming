#include "main.h"

/**
 * read_textfile - reads a text file and prints it to standard output
 * @filename: file descripter
 * @letters: count
 *
 * Return: any time size_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz, oz;
	char *buf = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);
	if ((filename == NULL) || (fd == -1) || (buf == NULL))
	{
		free(buf);
		return (0);
	}
	sz = read(fd, buf, letters);
	if (sz == -1)
		return (0);
	buf[sz] = '\0';
	oz = write(STDOUT_FILENO, buf, sz);
	if (oz == -1)
		return (0);
	close(fd);
	return (oz);
}
