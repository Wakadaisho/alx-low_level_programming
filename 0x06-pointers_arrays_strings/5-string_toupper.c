#include "main.h"

/**
* string_toupper - changes all lowercase to uppercase
* @s: string to convert case
*
* Return: pointer to string
*/
char *string_toupper(char *s)
{
	char *head = s;
	int delta = 'A' - 'a';

	while (*head)
	{
		if (*head >= 'a' && *head <= 'z')
			*head += delta;
		head++;
	}

	return (s);
}
