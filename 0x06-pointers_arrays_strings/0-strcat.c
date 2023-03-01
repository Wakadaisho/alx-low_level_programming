#include "main.h"

/**
* _strcat - appends the src string to the dest string,
*		overwriting the terminating null byte (\0) at the end of dest,
*		and then adds a terminating null byte
* @dest: pointer to the resulting string
* @src: pointer to the source string string
*
* Return: char*, pointer to new string
*/
char *_strcat(char *dest, char *src)
{
	char *head = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (head);
}
