#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 * Return: 1 if it worked, -1 if it didn't
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int bold;

	if (index > 64)
		return (-1);
	bold = index;
	for (a = 1; bold > 0; a *= 2, bold--)
		;

	if ((*n >> index) & 1)
		*n -= a;

	return (1);
}
