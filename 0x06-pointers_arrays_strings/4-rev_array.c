#include "main.h"

/**
* reverse_array - reverse an array of integers
* @a: array to reverse
* @n: number of elements in the array
*
* Return: void;
*/
void reverse_array(int *a, int n)
{
	int *head = a;
	int *tail = a + (n - 1);

	while (head < tail)
	{
		*head = *head + *tail;
		*tail = *head - *tail;
		*head = *head - *tail;
		head++;
		tail--;
	}
}
