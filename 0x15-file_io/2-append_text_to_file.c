#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: filename
 * @text_content: textcontent
 * Return: 1 if succes, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t write1;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	for (i = 0; text_content[i]; i++)
	{
	}
	write1 = write(fd, text_content, i);
	if (write1 == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
