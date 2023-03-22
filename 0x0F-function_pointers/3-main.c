#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print the result of an arithmetic expression
 *		passed to the program
 *
 * @argc: number of arguments passed to the program
 * @argv: arguments passed to the program as strings
 *
 * Return:	0 - Success
 *		98 - wrong number of arguments
 *		99 - unrecognized operator
 *		100 - division by zero error
 */
int main(int argc, char **argv)
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op = get_op_func(argv[2]);

	if (op == NULL || strlen(argv[2]) > 1)
	{
		printf("Error\n");
		return (99);
	}

	if (*argv[2] == '/' && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%i\n", op(atoi(argv[1]), atoi(argv[3])));

	return (0);
}

