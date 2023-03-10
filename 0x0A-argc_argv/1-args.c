#include <stdio.h>

/**
 * main - print the number of arguments passed to it
 *
 * @argc : number of arguments passed to the executable
 * @argv : string array of arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
