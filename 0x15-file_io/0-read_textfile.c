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
	ssize_t read1, write1;

	buf = malloc(letters);
	if (!buf)
	{	free(buf);
		return (0);
	}
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0777);
	if (fd == -1)
		return (0);
	read1 = read(fd, buf, letters);
	if (read1 == -1)
		return (0);
	write1 = write(1, buf, read1);
	if (write1 != read1 || write1 == -1)
		return (0);
	close(fd);
	return (read1);
}
