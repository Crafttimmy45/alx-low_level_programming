#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number
 * @n: unsigned long int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int a, count = 0;
	unsigned long int tmp;

	for (a = 63; a >= 0; a--)
	{
		tmp = n >> a;

		if (tmp & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
