#include "main.h"
/**
 * _abs -returns absolute value of an int
 * Description: The standard library provides a similar funct..
 * @n: the int to check
 * Return: 0 or 1
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (n * -1);
}
