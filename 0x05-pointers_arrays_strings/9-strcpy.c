#include "main.h"

/**
* _strcpy - copies the string pointed by src to dest
* @dest: destination of copied characters
* @src: source of characters to copy
*
* Return: char *
*/
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = *src;

	return (start);
}
