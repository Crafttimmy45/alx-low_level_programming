#include "main.h"

/**
 * _strstr - function that locates a substring
 * @needle: function finds the first occurrence of the substring
 * @haystack: substring to look for
 * Return: Returns a pointer to the beginning of the located substring
 *  or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
				b++;
			else
				break;
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
			return (haystack + a);
	}
	return (0);
}
