#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * @argc: number of arguments to main
 * @argv: argument array
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int from_fd, to_fd;
	ssize_t bytes_from, bytes_to;
	char buffer[1024];

	if (argc != 3)
		printError(97, argv);

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
		printError(98, argv);

	to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		closeFd(from_fd);
		printError(99, argv);
	}

	do {
		bytes_from = read(from_fd, buffer, 1024);
		if (bytes_from == -1)
			printError(98, argv);
		bytes_to = write(to_fd, buffer, bytes_from);
		if (bytes_to == -1)
			printError(99, argv);
	} while (bytes_from == 1024);
	closeFd(from_fd);
	closeFd(to_fd);
	return (0);
}

/**
 * printError - print error message and exit
 *
 * @code: return cod to exit with
 * @argv: arguments to be used in error message
 *
 * Return: void
 */
void printError(int code, char **argv)
{
	switch (code)
	{
		case 97:
			dprintf(2, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(2, "Error: Can't read from %s\n", argv[1]);
			break;
		case 99:
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			break;
		default:
			break;
	}
	exit(code);
}

/**
 * closeFd - close a file descriptor, exit if error occurs
 *
 * @fd: file descriptor to close
 *
 * Return: void
 */
void closeFd(int fd)
{
	int ret = close(fd);

	if (ret == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
