#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks the endianness
 *
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	/* 2 bytes */
	unsigned short int i = 0x0001;

	return (*((char *)&i));
}
