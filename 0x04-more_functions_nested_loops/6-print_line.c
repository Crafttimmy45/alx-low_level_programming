#include "main.h"
#include <stdio.h>

/**
 * print_line - print line  dependent on the integer n.
 * @n: number of times
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
