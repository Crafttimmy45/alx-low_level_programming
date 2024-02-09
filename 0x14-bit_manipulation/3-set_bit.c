#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it dintn't
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 64)
		return (-1);

	for (a = 1; index > 0; index--, a *= 2)
		;
	*n += a;

	return (1);
}
