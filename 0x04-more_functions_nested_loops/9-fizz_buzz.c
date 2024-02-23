#include <stdio.h>
#include "main.h"

/**
 * main - prints Buzz each numbers of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;

	while (a < 101)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%d", a);
		}

		if (a != 100)
		{
			printf(" ");
		}
		a++;
	}
	printf("\n");

	return (0);
}
