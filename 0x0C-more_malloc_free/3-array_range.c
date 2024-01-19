#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of valurs stored and number of elements
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *a;
	int b, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	a = malloc(sizeof(int) * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
		a[b] = min++;

	return (a);
}
