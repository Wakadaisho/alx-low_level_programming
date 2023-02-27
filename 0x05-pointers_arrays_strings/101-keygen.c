
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: generate random valid passwords
 *		for a program 101-crackme
 *
 * Return: the generated password
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (n);
}
