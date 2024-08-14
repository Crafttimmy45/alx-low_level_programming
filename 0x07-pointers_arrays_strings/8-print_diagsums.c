#include "main.h"

/**
 * print_diagsums - a function that prints the sum of
 * the two diagonals of a square matrix of integers
 * @size: size of the matrix
 * @a: input pointer of matrix
 */
void print_diagsums(int *a, int size)
{
	int b, sum = 0, sum1 = 0;

	for (b = 0; b < size; b++)
	{
		sum += *(a + (size * b + b));
		sum1 += *(a + (size * b + size - 1 - b));
	}
	printf("%d, ", sum);
	printf("%d\n", sum1);
}
