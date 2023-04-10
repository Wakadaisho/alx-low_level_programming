#ifndef _MAIN_H_
#define _MAIN_H_
#include <sys/types.h>

int _putchar(char c);

/**
 * _strlen - return the length of a string
 * @s: string to check
 *
 * Return: int
 */
int _strlen(char *s);

/**
 * read_textfile - reads a textfile and prints it to POSIX stdout
 * @filename: pathname of file
 * @letters: number of letters to read and print
 *
 * Return:	number of letters read and printed
 *		0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters);

/**
 * create_file - creates a file
 * @filename: pathname of file
 * @text_content: string to write to file
 *
 * Return:	1 on success
 *		-1 on failure
 */
int create_file(const char *filename, char *text_content);

/**
 * append_text_to_file - creates a file
 * @filename: pathname of file
 * @text_content: string to write to file
 *
 * Return:	1 on success
 *		-1 on failure
 */
int append_text_to_file(const char *filename, char *text_content);

/**
 * printError - print error message and exit
 *
 * @code: return cod to exit with
 * @argv: arguments to be used in error message
 *
 * Return: void
 */
void printError(int code, char **argv);

/**
 * closeFd - close a file descriptor, exit if error occurs
 *
 * @fd: file descriptor to close
 *
 * Return: void
 */
void closeFd(int fd);

#endif /* _MAIN_H_ */
