#include "main.h"

/**
 * _strlen - calculate the length of a string.
 * @s: the string to calculate its length.
 * Return: void
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
