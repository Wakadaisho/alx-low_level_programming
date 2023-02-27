#include "main.h"

/**
* _strlen - get the length of a string
* @s: string
*
* Return: the length of a string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	{
		len++;
	}

	return (len);
}
