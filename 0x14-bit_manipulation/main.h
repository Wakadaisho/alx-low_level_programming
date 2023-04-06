#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);

/**
 * binary_to_uint - convert a binary number to an unsigned int
 *
 * @b: string of, ideally, only '0' or '1' chars
 *
 * Return:	base 10 representation of binary value
 *		Fail: 0 if b is NULL or contains non '0' or '1' char
 */
unsigned int binary_to_uint(const char *b);

/**
 * print_binary - print the binary representation of a number
 *
 * @n: number to print the binary digits of
 *
 * Return: void
 */
void print_binary(unsigned long int n);

/**
 * get_bit - returns the value of a bit at a given index
 *
 * @n: number to get the bit value from
 * @index: the index, starting from 0, to get the bit value of
 *
 * Return:	value of the bit at index
 *		Fail: -1 if index does not exist
 */
int get_bit(unsigned long int n, unsigned int index);

/**
 * set_bit - sets the value of a bit to 1 at a given index
 *
 * @n: number to set the bit of
 * @index: the index, starting from 0, to set the bit value of
 *
 * Return:	Success: 1
 *		Fail: -1
 */
int set_bit(unsigned long int *n, unsigned int index);

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 *
 * @n: number to set the bit of
 * @index: the index, starting from 0, to clear the bit value of
 *
 * Return:	Success: 1
 *		Fail: - 1
 */
int clear_bit(unsigned long int *n, unsigned int index);

/**
 * flip_bits - returns the number of bits you would need to flip
 *		to get one number from another
 *
 * @n: first operand
 * @m: second operand
 *
 *Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m);

/**
 * get_endianness - checks the endianness
 *
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void);

#endif /* _MAIN_H_ */
