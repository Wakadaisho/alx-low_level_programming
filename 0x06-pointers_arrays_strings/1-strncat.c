#include "main.h"

/**
* _strncat - appends n bytes from src string to the dest string,
*		it will use at most n bytes from src; and
*		src does not need to be null-terminated
*		if it contains n or more bytes
* @dest: pointer to the resulting string
* @src: pointer to the source string string
* @n: number of bytes to copy
*
* Return: char *, pointer to new string
*/
char *_strncat(char *dest, char *src, int n)
{
	char *head = dest;

	while (*dest)
		dest++;

	while (*src && n)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	if (*src == '\0' && n != 0)
	{
		*dest = '\0';
	}

	return (head);
}
