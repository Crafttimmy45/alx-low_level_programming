#include "main.h"

/**
 * print_sign - prints the sign of a number
 * Description: n will be used with condition
 * @n: the int to check
 * Return: 0 or 1
 */

int print_sign(int n)
{
	int negative = -1;
	char ch = (char) negative;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (ch);
	}
}
