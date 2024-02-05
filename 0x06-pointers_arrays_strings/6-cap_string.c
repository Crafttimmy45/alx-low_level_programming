#include "main.h"

/**
 * cap_string - capitalizes all words of a
 * @s: input string
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int b, c;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (b = 0; s[b] != '\0'; b++)
	{
		if (b == 0 && s[b] >= 'a' && s[b] <= 'z')
			s[b] -= 32;

		for (c = 0; c < 13; c++)
		{
			if (s[b] == spe[c])
			{
				if (s[b + 1] >= 'a' && s[b + 1] <= 'z')
				{
					s[b + 1] -= 32;
				}
			}
		}
	}

	return (s);
}
