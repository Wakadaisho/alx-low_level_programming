#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - creates a file
 * @filename: pathname of file
 * @text_content: string to write to file
 *
 * Return:	1 on success
 *		-1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t output = 1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		output = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (output == -1)
		return (-1);

	return (1);
}

/**
 * _strlen - return the length of a string
 * @s: string to check
 *
 * Return: int
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; s && *s; len++)
		s++;

	return (len);
}
