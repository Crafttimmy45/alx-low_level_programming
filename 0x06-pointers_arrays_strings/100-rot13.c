#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int c, d;

	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; a[d] != '\0'; d++)
		{
			if (s[c] == a[d])
			{
				s[c] = b[d];
				break;
			}
		}
	}

	return (s);
}
