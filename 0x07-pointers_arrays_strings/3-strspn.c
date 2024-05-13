#include "main.h"

/**
 * *_strspn - get the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, boo;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		boo = 1;
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
			{
				boo = 0;
				break;
			}
		}
		if (boo == 1)
			break;
	}
	return (a);
}
