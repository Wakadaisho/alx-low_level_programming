#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a textfile and prints it to POSIX stdout
 * @filename: pathname of file
 * @letters: number of letters to read and print
 *
 * Return:	number of letters read and printed
 *		0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t chars_read, chars_printed;
	int fd;
	char *c;

	if (filename == NULL)
		return (0);

	c = malloc(letters * sizeof(char) + 1);

	if (c == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	chars_read = read(fd, c, letters);
	if (chars_read == -1)
	{
		free(c);
		close(fd);
		return (0);
	}

	chars_printed = write(STDOUT_FILENO, c, chars_read);

	free(c);
	close(fd);
	return (chars_printed == -1 ? 0 : chars_printed);
}
