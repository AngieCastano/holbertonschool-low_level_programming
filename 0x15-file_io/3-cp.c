#include "holberton.h"

/**
 * main -  copies the content of a file to another file.
 * @ac: argumet couter
 * @av: argument vector
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd1, fd2, close1, close2;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fd1 = open(av[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	read(fd1, buf, 1024);
	dprintf(fd2, "%s", buf);
	close1 = close(fd1);
	close2 = close(fd2);
	if (close1 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", close1);
		exit(100);
	}
	if (close2 == -1)
	{
		dprintf(2, "Error: Can't close fd %i\n", close2);
		exit(100);
	}
	return (0);
}
