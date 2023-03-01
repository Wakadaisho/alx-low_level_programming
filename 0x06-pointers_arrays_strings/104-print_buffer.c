#include "main.h"
#include <stdio.h>

/**
* print_buffer - prints a buffer
* @b: buffer to print
* @size: bytes to print
*
* Return: void
*/
void print_buffer(char *b, int size)
{
	int col = 0;
	int row = 0;
	int n = 10;
	int i;

	while (row < size / n + 1)
	{
		printf("%08x: ", row * n);
		while (col < n - 1)
		{
			i = (row * n) + col;
			if (i < size)
			{
				printf("%02x%02x ", *(b + i), *(b + i + 1));
			}
			else
			{
				printf("%5s", " ");
			}
			col += 2;
		}
		col = 0;
		while (col < n && (row * n + col) < size)
		{
			i = (row * n) + col;
			switch (*(b + i))
			{
				case '\n':
				case '\0':
					printf(".");
					break;
				default:
					printf("%c", *(b + i));
			}
			col++;
		}
		printf("\n");
		row++;
		col = 0;
	}
}
