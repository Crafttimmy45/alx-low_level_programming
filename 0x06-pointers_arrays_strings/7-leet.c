#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: input string
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int c, d;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (s[c] == a[d])
			{
				s[c] = b[d];
			}
		}
	}

	return (s);
}
