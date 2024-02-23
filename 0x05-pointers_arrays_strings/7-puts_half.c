#include "main.h"

/**
 * put_half - prints the second half of a strinig
 * @str: string to use
 * Description: if odd number of chars, print (length - 1) / 2
 * Return: void
 */
void put_half(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;
	if (len + 1 % 2 != '0')
		n = (len - 1) / 2;
	else
		n = (len / 2);
	n++;

	for (len = n; str[len] != '\0'; len++)
		_putchar(str[len]);
	_putchar('\n');
}
