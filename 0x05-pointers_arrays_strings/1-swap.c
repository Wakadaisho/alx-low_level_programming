#include "main.h"

/**
* swap_int - swap two integer values
*		passed by pointers
* @a: first integer pointer
* @b: second integer pointer
*
* Return: void
*/
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
