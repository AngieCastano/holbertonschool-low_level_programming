#include "holberton.h"

/**
 * create_file - functions to create a file
 * @filename: filename
 * @text_content: text to include
 * Return: 1 if succes, -1 in fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t write1;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	for (i = 0; text_content[i]; i++)
	{
	}
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	write1 = write(fd, text_content, i);
	if (write1 == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
