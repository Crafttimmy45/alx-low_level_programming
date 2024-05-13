#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b:buffer
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int g, h;

	for (g = 0; g < size; g += 10)
	{
		printf("%08x: ", g);

		for (h = 0; h < 10; h++)
		{
			if ((h +
		}
	}
}
