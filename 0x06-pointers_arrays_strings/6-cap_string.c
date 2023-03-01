#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: string to convert case
*
* Return: pointer to string
*/
char *cap_string(char *s)
{
	char *head = s;
	int delta = 'A' - 'a';

	if (*head && *head >= 'a' && *head <= 'z')	/*first character*/
		*head += delta;
	head++;

	while (*head)
	{
		if (*head >= 'a' && *head <= 'z')
		{
			switch (*(head - 1))
			{
				case ' ':
				case '\t':
				case '\n':
				case ';':
				case ',':
				case '.':
				case '!':
				case '?':
				case '"':
				case '(':
				case ')':
				case '{':
				case '}':
					*head += delta;
					break;
				default:
					break;
			}
		}
		head++;
	}

	return (s);
}
