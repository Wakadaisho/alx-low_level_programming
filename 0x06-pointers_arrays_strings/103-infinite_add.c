#include "main.h"
#include <stdio.h>

/**
* infinite_add - encode string using r0t13
* @n1: first operand number string
* @n2: second operand number string
* @r: result storage buffer
* @size_r: buffer_size
*
* Return: pointer to string
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int temp_result, size, a, b;
	int n1_length = 0, n2_length = 0, i = 0, carry = 0;

	while (*n1)
	{
		n1_length++;
		n1++;
	}
	while (*n2)
	{
		n2_length++;
		n2++;
	}
	n1--;
	n2--;
	size = n1_length > n2_length ? n1_length + 1 : n2_length + 1;
	if (size >= size_r)
		return (0);
	r += size;
	*r-- = '\0';
	while (i++ < size - 1)
	{
		a = i >= n1_length ? 0 : *(n1 - i) - '0';
		b = i >= n2_length ? 0 : *(n2 - i) - '0';
		temp_result = carry + a + b;
		carry = temp_result / 10;
		temp_result %= 10;
		*r-- =  temp_result + '0';
	}
	if (carry)
	{
		*r  = carry + '0';
	}
	else
	{
		++r;
	}
	return (r);
}
