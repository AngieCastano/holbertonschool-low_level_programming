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
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	for (i = 1; text_content[i]; i++)
	{
	}
	if (!text_content)
		text_content = "\n";
	write1 = write(fd, text_content, i);
	if (write1 == -1 || write1 != i)
	{
		return (-1);
	}
	return (1);
}
