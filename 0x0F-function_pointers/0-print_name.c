#include "function_pointers.h"

/**
 * print_name - prints out a name, using a function pointer
 *
 * @name: string to print
 * @f: function pointer that specifies how the printing is done
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
