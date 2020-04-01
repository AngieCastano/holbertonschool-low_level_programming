#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: filename
 * @letters: num_of_letters
 * Return: how many letters were printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t read1;

	buf = malloc(letters);
	if (!buf || !filename)
	{	free(buf);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read1 = read(fd, buf, letters);
	if (read1 == -1)
		return (0);
	write(STDOUT_FILENO, buf, read1);
	free(fd);
	close(fd);
	return (read1);
}
