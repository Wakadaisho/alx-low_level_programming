#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
*		followed by a newline
* @a: array of integers to print
* @n: number of elements to print
*
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}

	printf("%d\n", a[i]);
}
