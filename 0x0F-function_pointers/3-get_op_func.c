#include "3-calc.h"

/**
 * get_op_func - return a function corresponding to an operator
 *
 * @s: operator to match a function to
 *
 * Return: int (*)(int, int) - function that was as a binary operator
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (ops[i].f);
}
