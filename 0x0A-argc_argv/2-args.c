#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments passed to it
 *
 * @argc : number of arguments passed to the executable
 * @argv : string array of arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int args = 0;

	while (args < argc)
		printf("%s\n", argv[args++]);

	return (0);
}
