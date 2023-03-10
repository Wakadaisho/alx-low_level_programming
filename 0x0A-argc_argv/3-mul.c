#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product of the first two arguments
 *
 * @argc : number of arguments passed to the executable
 * @argv : string array of arguments passed
 *
 * Return:	0 (Success)
 *		1 - Error
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
