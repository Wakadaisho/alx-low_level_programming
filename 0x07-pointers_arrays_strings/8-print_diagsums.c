#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
*			of a square matrix of integers
* @a: a square matrix of integers
* @size: dimension/size of matrix
*
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int sum_back = 0, sum_forward = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_back += *(a + (i * size) + i);
		sum_forward += *(a + (i * size) + (size - 1 - i));
	}

	printf("%i, %i\n", sum_back, sum_forward);
}
