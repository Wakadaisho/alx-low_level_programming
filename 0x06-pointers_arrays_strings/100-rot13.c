#include "main.h"

/**
* rot13 - encode string using r0t13
* @s: string to encode
*
* Return: pointer to string
*/
char *rot13(char *s)
{
	char *x = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *y = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *head = s;
	char *x_p;
	char *y_p;

	while (*head)
	{
		x_p = x;
		y_p = y;

		while (*x_p)
		{
			if (*head == *x_p)
			{
				*head = *y_p;
				break;
			}
			x_p++;
			y_p++;
		}
		head++;
	}
	return (s);
}
