#include <stdio.h>

/**
 * main - print the name of the program
 *
 * @argc : number of arguments passed to the executable
 * @argv : string array of arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);

	return (0);
}
