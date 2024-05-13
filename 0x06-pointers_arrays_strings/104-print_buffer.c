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
			if ((h + g) >= size)
				printf(" ");

			else
				printf("%02x", *(b + h + g));

			if ((h % 2) != 0 && h != 0)
				printf(" ");
		}

		for (h = 0; h < 10; h++)
		{
			if ((h + g) >= size)
				break;

			else if (*(b + h + g) >= 31 &&
					*(b + h + g) <= 126)
				printf("%c", *(b + h + g));

			else
				printf(".");
		}

		if (g >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}
