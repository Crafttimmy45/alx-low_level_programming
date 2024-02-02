#include <stdio.h>
#include "main.h"

/**
 * main - Fizz for multiples of 3 and Buzz for multtiples of 5 FizzBuzz for both
 *
 * Return: void
 */
int main(void)
{
	int a;
	
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz");
		} else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz");
		} else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (a == 1)
		{
			printf("%d", a);
		} else
		{
			printf(" %d", a);
		}
	}
	printf("\n");

	return (0);
}
