#include <stdio.h>
#include <inttypes.h>

/**
 * endian_value - return the endian value of an architecture
 *
 * Return:	0 - little-endian
 *		1 - bit-endian
 */
int endian_value(void)
{
	uint32_t data;
	uint8_t *cptr;

	data = 1;
	cptr = (uint8_t *)&data;

	if (*cptr == 1)
	{
		return (0);
	}

	return (1);
}

/**
 * main - print the opcodes of the main function
 *
 * @argc: number of arguments passed to the program
 * @argv: arguments passed to the program as strings
 *
 * Return:	0 - Success
 *		1 - wrong number of arguments
 *		2 - number of bytes is negative
 */
int main(int argc, char **argv)
{
	unsigned int i = 0, count, mask;

	/* mask = endian_value() ? 0xff000000 : 0x000000ff; */
	mask =  0x000000ff;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}

	count = atoi(argv[1]);

	if (count == 0)
	{
		return (0);
	}

	while (i < count - 1)
	{
		printf("%.2x ", *(unsigned int *)(&main + i) & mask);
		i++;
	}

	printf("%.2x\n", *(unsigned int *)(&main + i) & mask);

	return (0);
}

