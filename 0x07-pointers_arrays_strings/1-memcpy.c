#include "main.h"

/**
* _memcpy - fills memory with a constant byte
* @dest: pointer to the memory buffer to copy to
* @src: pointer to the memory buffer to copy from
* @n: number of bytes to fill
*
* Return: char*, pointer to new string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
