#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument array
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	int fd1, fd2, r1 = 1024, w1;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r1 = read(fd1, buf, 1024)) != 0)
	{
		if (r1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w1 = write(fd2, buf, r1);
		if (w1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_new(fd1);
	close_new(fd2);
	return (0);
}


/**
 * close_new - check if its closable
 * @f_n: file descrption
 *
 * Return: void
 */
void close_new(int f_n)
{
	if (close(f_n) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_n);
		exit(100);
	}
}
