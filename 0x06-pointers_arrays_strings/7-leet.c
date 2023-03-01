#include "main.h"

/**
* leet - encode string to 1337
* @s: string to convert case
*
* Description:  Letters a and A should be replaced by 4
*		Letters e and E should be replaced by 3
*		Letters o and O should be replaced by 0
*		Letters t and T should be replaced by 7
*		Letters l and L should be replaced by 1
*
* Return: pointer to string
*/
char *leet(char *s)
{
	char *cipher_x = "aAeEoOtTlL";
	char *cipher_y = "4433007711";
	char *head = s;
	char *cipher_x_p;
	char *cipher_y_p;

	while (*head)
	{
		cipher_x_p = cipher_x;
		cipher_y_p = cipher_y;

		while (*cipher_x_p)
		{
			if (*head == *cipher_x_p)
			{
				*head = *cipher_y_p;
				break;
			}
			cipher_x_p++;
			cipher_y_p++;
		}
		head++;
	}
	return (s);
}
